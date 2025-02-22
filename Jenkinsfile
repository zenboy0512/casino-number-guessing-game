pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
                sh 'rm -rf build'  // Clean the build directory
                sh 'cmake -B build -S .'
                sh 'cmake --build build'
            }
        }
        stage('Test') {
            steps {
                sh './build/casino_game'  // Run the game
                sh './build/test_game'    // Run unit tests
            }
        }
        stage('Deliver') {
            steps {
                sh 'tar -czf casino_game.tar.gz build/casino_game'
                archiveArtifacts artifacts: 'casino_game.tar.gz', fingerprint: true
            }
        }
    }
}