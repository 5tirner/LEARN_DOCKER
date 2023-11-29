`DockerFile Creation`:
- the docker file name should be like `Dockerfile` or `dockerfile`.
- Write your command inside the doc
- Build the dockerfile with the command "docker build -t "nameYouChoose"."
- Execute the dockerfile with the command: docker run "nameYouChoose"
- Here are the most common types of instructions:

`DockerFIle Commands`:
- FROM  - defines a base for your image. exemple : FROM debian
- RUN - executes any commands in a new layer on top of the current image and commits the result. RUN also has a shell form for running commands.
- WORKDIR - sets the working directory for any RUN, CMD, ENTRYPOINT, COPY, and ADD instructions that follow it in the Dockerfile. (You go directly in the directory you choose)
- COPY - copies new files or directories from and adds them to the filesystem of the container at the path .
- CMD - lets you define the default program that is run once you start the container based on this image. Each Dockerfile only has one CMD, and only the last CMD instance is respected when multiple ones exist.