#!/bin/bash

# Creator: VPR
# Created: December 14th, 2021
# Updated: December 24th, 2021

# This script is intended to work with Pidjeon for a seamless injection process.

TARGET="HitmanBloodMoney.exe"     # Change as necessary
PAYLOAD="Bin/Release/Payload.dll" # Change as necessary
PIDJEON_PATH="~/.toolkit"         # Change as necessary

export PATH=$PATH:"${PIDJEON_PATH}"

function inject {
    pidjeon_x86.exe "${TARGET}" "${PAYLOAD}" -i ManualMap
}

inject
