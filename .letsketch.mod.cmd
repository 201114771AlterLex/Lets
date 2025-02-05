cmd_/home/alterlex/Documentos/Lets/letsketch.mod := printf '%s\n'   letsketch.o | awk '!x[$$0]++ { print("/home/alterlex/Documentos/Lets/"$$0) }' > /home/alterlex/Documentos/Lets/letsketch.mod
