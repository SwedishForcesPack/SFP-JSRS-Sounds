pipeline {
    agent {
        label 'mikero'
    }

    stages {
        stage('Build') {
            steps {
                bat 'build.bat' 
                archiveArtifacts artifacts: '@sfp_jsrs_sounds/**/*'
            }
            post {
                always {
                    bat 'subst p: /d > nul || exit /b 0'
                }
            }
        }
    }
}
