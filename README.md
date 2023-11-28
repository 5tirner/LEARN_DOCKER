`Fisrt Of All`:\
Docker is not a virtual machine,It is a mechanism to containerize applications and isolate the processes running these applications.
`Notice`:\
Virtual machines are about isolating hardware, Docker is about isolating processes.\
`KeyWords`:
- Dockerfile: a text document that contains all the commands a user could call on the command line to assemble an image.
- Docker Image: created from a so called Dockerfile.
- Docker Container: from the image the container can be created, we can say the    container is a running instances of the image.
- The Docker engine: the responsible for instantiating and running the containers.
- Docker Volume is a mechanism to have a Docker managed file share between your container, You can map these volumes via so-called bind mounts into a container.
- Docker Networking allows you to specify virtual Docker networks. Network traffic from and to containers is routed through a Docker proxy, This allows different setups for networking between individual containers.
- Docker Compose is a feature to build and run several different containers from a single `docker-compose.yml file`, You can specify the exact images for the docker containers, the container names, networks, volumes and much more.