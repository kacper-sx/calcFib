# Get the base Ubuntu image from Docker Hub
FROM ubuntu:latest

# Update apps on the base image
RUN apt-get -y update && apt-get install -y clang

# Specify the working directory
WORKDIR \fibonacii

# Copy the current folder which contains C++ source code to the Docker image
COPY . .

# Use Clang to compile the Test.cpp source file
RUN clang++ -o fibo fibo.cpp

# Run the output program from the previous step
CMD ["./fibo"]