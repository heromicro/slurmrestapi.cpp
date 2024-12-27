
openapi-generator generate -i spec/openapi.24.05.5.json  -g cpp-restsdk --additional-properties modelPackage=hm.slurm.client.model,packageName=slurmrestapi --package-name slurmrestapi -o ./
