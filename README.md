# SFP: JSRS Sounds

Changes SFP weapons to JSRS sounds

## Build locally

Follow HEMTT instructions on https://synixebrett.github.io/HEMTT/

- Use `hemtt build` to build PBOs
- Use `hemtt build --release` to create a release build

## Build on Jenkins

Project uses Jenkinsfile to define build steps.
Add the repository or organization to Jenkins as a pipeline job and it should pick it up automatically.

It requires a node with the label "hemtt" and hemtt must be available in PATH