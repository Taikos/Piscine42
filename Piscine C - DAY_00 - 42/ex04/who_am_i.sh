ldapwhoami -Q | sed 's/dn://' | sed 's/ou=2017_paris,//' | sed 's/ou=paris,//'
