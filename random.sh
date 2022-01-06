chars="0123456789                "
for i in {1..1000} ; do
    echo -n "${chars:RANDOM%${#chars}:1}"
done
echo
