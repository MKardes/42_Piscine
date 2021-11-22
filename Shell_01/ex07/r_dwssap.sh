cat /etc/passwd | cut -f 1 -d ':' | rev | sort -r | tr '\n' ','
