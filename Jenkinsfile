pipeline {
    agent {
        label "aws"
    }

    stages {
        stage("build") {
            steps {
                echo "building app..." > build.logs
            }
        }

        stage("test") {
            steps {
                echo "testing app..."
            }
        }

        stage("deploy") {
            steps {
                echo "deploying app..."
            }
        }
        
    }
}
