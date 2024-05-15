# C_piscine_reload

Switching from HTTPS to SSH protocol.

To check what protocol you're using just run:

git config -l

and look at the line starting with remote.origin.url.

To switch your protocol run:

git config remote.origin.url git@github.com:your_username/your_project.git


