set -x
set -e

SRCROOT="$(cd ../.. && pwd)"
BUILT_PRODUCTS_DIR="$SRCROOT/gen/getconf.tproj"

# rm -rf $BUILT_PRODUCTS_DIR
mkdir -p $BUILT_PRODUCTS_DIR

SCRIPT_INPUT_FILE=(
    "${SRCROOT}/getconf.tproj/confstr.gperf"
    "${SRCROOT}/getconf.tproj/limits.gperf"
    "${SRCROOT}/getconf.tproj/pathconf.gperf"
    "${SRCROOT}/getconf.tproj/progenv.gperf"
    "${SRCROOT}/getconf.tproj/sysconf.gperf"
)

SCRIPT_OUTPUT_FILE=(
    "${BUILT_PRODUCTS_DIR}/confstr.c"
    "${BUILT_PRODUCTS_DIR}/limits.c"
    "${BUILT_PRODUCTS_DIR}/pathconf.c"
    "${BUILT_PRODUCTS_DIR}/progenv.c"
    "${BUILT_PRODUCTS_DIR}/sysconf.c"
)

i=0

while [ $i -lt ${#SCRIPT_INPUT_FILE[@]} ]; do
    INPUT=SCRIPT_INPUT_FILE[$i]
    OUTPUT=SCRIPT_OUTPUT_FILE[$i]
    LC_ALL=C awk -f "${SRCROOT}/getconf.tproj/fake-gperf.awk" "${!INPUT}" > "${!OUTPUT}"
    i=$(($i + 1))
done
