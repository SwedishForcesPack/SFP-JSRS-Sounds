pipeline {
    agent {
        label 'mikero'
    }

    stages {
        stage('Build') {
            steps {
                bat 'build.bat' 
            }
            post {
                always {
                    bat 'subst p: /d > nul || exit /b 0'
                }
            }
        }

        stage('Archive Build') {
            steps {
                archiveArtifacts artifacts: '@sfp_jsrs_sounds/**/*'
            }
        }

        stage('Publish to Steam Workshop') {
            when {
                branch 'master'
            }

            steps {
                publishSteamWorkshop '1205570929', '@sfp_jsrs_sounds', env.GIT_COMMIT
            }
        }
    }
}

void publishSteamWorkshop(String id, String mod, String changeNote) {
    bat "\"C:\\Program Files (x86)\\Steam\\SteamApps\\common\\Arma 3 Tools\\Publisher\\PublisherCmd.exe\" update /changeNote:$changeNote /id:$id /path:$mod"
}
