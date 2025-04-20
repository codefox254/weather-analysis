#!/bin/bash

# Usage: ./gitpush.sh "your commit message"

# Set a default message if none is provided
msg=${1:-"Auto commit from script"}

# Add all changes
git add .

# Commit
git commit -m "$msg"

# Push to current branch
git push
