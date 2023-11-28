`Basic Command Line For Docker`:
- docker ps or docker container ls -> `Show Cntrs Details`.
- docker build "The Path Of A Docker File Do You Want To Build Image With It" -> `build image`.
- docker built -t or --tag "Image Name" "PATH" -> `Build Image With Name`.
- docker kill "Image Name" -> `Stop An Image`.
- docker images or docker image ls -> `To see Docker Images`.
- docker pull "Image Name" -> `Pull An Image From Dockerhub`.
- docker start "Cntr Name" -> `Start Container`.
- docker stop "Cntr Name" -> `Stop Container`.
- docker container rm "Cntr Name" -> `Remove Cntr`.
- docker image rm "Image Name" -> `Remove Image`.
- docker system df -> `See All The Info About Cntrs, Images, Volumes, Cach`.
- docker exec -it "Cntr Name" "bash, sh..." -> `Execute The Program`.

`Docker run Commands`:
- docker run "Image Name" -> `To run the docker image to have a container`.
- docker run -d or --detach "Image Name"-> `Run container in background`.
- docker run -p -> `publish a container's port to the host`.
- docker run -P -> `publish all exposed port to random ports`.
- docker run -it "Image Name" -> `the program will continue to run and we will be able to interact with the container`.