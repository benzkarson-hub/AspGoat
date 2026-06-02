#!/usr/bin/env bash
# Setup helper for AspGoat
set -e

IFS=","
for entry in $CSV_DATA; do
    echo "entry: $entry"
done

echo "setup complete"
