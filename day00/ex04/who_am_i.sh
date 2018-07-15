ldapwhoami -Q | sed 's/dn://' | sed "s/\.*//"
