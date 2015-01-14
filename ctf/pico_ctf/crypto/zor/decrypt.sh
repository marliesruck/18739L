#!/bin/bash

for i in {1..255}
do
	python ZOR.py decrypt encrypted decrypted "$i"
done
