GEN_DIR="$(cd ../.. && pwd)/gen"
# XPC_BUILD_XCSCRIPTS_DIR="$(cd ../../xscripts && pwd)"
# /bin/bash ${XPC_BUILD_XCSCRIPTS_DIR}/darwinversion.sh

destdir="$GEN_DIR/wait4path/x86_64"
mkdir -p $destdir


# Values were grabbed from `wait4path.version` and `project.pbxprog`
DARWIN_DISPLAY_NAME="Darwin Filesystem Path Waiter"
PRODUCT_NAME="wait4path"
DARWIN_BUNDLE_IDENTIFIER="com.apple.system_cmds.wait4path"
DARWIN_DISPLAY_VERSION="1.0.0"
DARWIN_COPYRIGHT="Copyright 2015 Apple Inc. All rights reserved."
DARWIN_VARIANT="RELEASE";

# Values generated from darwinversion.sh script
builder_version=`sw_vers -productVersion`
# builder_build=`sw_vers -buildVersion`

# Values were guessed/stubbed
EXECUTABLE_NAME="$PRODUCT_NAME"
CURRENT_PROJECT_VERSION="880.120.1"
builder_build="1A1"
SDK_NAME=""
PLATFORM_PRODUCT_BUILD_VERSION=""
XCODE_PRODUCT_BUILD_VERSION=""
DEFAULT_COMPILER=""
PLATFORM_NAME=""
IPHONEOS_DEPLOYMENT_TARGET=""
XCODE_VERSION_ACTUAL=""
DARWIN_INCREMENTAL_VERSION="$CURRENT_PROJECT_VERSION"

# Generate Info.plist
infoplist="$destdir"/Info.plist
rm -f "$infoplist"
/usr/libexec/PlistBuddy -c "Add :CFBundleIdentifier string" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Set :CFBundleIdentifier $DARWIN_BUNDLE_IDENTIFIER" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Add :CFBundleName string" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Set :CFBundleName $PRODUCT_NAME" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Add :CFBundleDisplayName string" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Set :CFBundleDisplayName $DARWIN_DISPLAY_NAME" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Add :CFBundleExecutable string" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Set :CFBundleExecutable $EXECUTABLE_NAME" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Add :CFBundleInfoDictionaryVersion string" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Set :CFBundleInfoDictionaryVersion 6.0" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Add :CFBundleShortVersionString string" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Set :CFBundleShortVersionString $DARWIN_DISPLAY_VERSION" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Add :CFBundleVersion string" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Set :CFBundleVersion $DARWIN_INCREMENTAL_VERSION" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Add :NSHumanReadableCopyright string" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Set :NSHumanReadableCopyright $DARWIN_COPYRIGHT" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Add :DarwinVariant string" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Set :DarwinVariant $DARWIN_VARIANT" -c "Save" $infoplist > /dev/null
# codesign can't deal with the Info.plist for each slice having different
# content, so don't encode architecture-specific information for now.
#
# <rdar://problem/15459303>
#/usr/libexec/PlistBuddy -c "Add :DarwinArchitecture string" -c "Save" $infoplist > /dev/null
#/usr/libexec/PlistBuddy -c "Set :DarwinArchitecture $CURRENT_ARCH" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Add :DarwinBuilderVersion string" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Set :DarwinBuilderVersion $builder_version" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Add :DarwinBuilderBuild string" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Set :DarwinBuilderBuild $builder_build" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Add :DTSDKName string" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Set :DTSDKName $SDK_NAME" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Add :DTSDKBuild string" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Set :DTSDKBuild $PLATFORM_PRODUCT_BUILD_VERSION" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Add :DTXcodeBuild string" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Set :DTXcodeBuild $XCODE_PRODUCT_BUILD_VERSION" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Add :DTCompiler string" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Set :DTCompiler $DEFAULT_COMPILER" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Add :DTPlatformName string" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Set :DTPlatformName $PLATFORM_NAME" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Add :DTPlatformVersion string" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Set :DTPlatformVersion $IPHONEOS_DEPLOYMENT_TARGET" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Add :DTXcode string" -c "Save" $infoplist > /dev/null
/usr/libexec/PlistBuddy -c "Set :DTXcode $XCODE_VERSION_ACTUAL" -c "Save" $infoplist > /dev/null
infoplistcontents=`cat $infoplist`


# Generate `darwin_version.h`
thehfile="$destdir/darwin_version.h"
rm -f "$thehfile"
echo "#ifndef __DARWIN_VERSION_H__" >> "$thehfile"
echo "#define __DARWIN_VERSION_H__" >> "$thehfile"
echo "const unsigned long __darwin_builder_version;" >> "$thehfile"
echo "const unsigned long __darwin_builder_build;" >> "$thehfile"
echo "const char *__darwin_build_inc_version;" >> "$thehfile"
echo "const char *__darwin_version_string;" >> "$thehfile"
echo "const char *__darwin_variant;" >> "$thehfile"
echo "const char *__darwin_debug_binary;" >> "$thehfile"
echo "#endif // __DARWIN_VERSION_H__" >> "$thehfile"
echo "" >> "$thehfile"


# Values generated from darwinversion.sh script
builder_version_int=${builder_version/.}
builder_version_int=${builder_version_int/.*}
builder_version_int="${builder_version_int}0"
brewedondate=`date`
brewedby=`whoami`
version_string="$DARWIN_DISPLAY_NAME Version $DARWIN_DISPLAY_VERSION: $brewedondate; $brewedby:$objects"
# objects=`basename ${OBJROOT}`
# binarywithsyms="$SYMROOT/$PRODUCT_NAME"

# Values were guessed/stubbed
objects=""
binarywithsyms=""

# Generate `darwin_version.c`
thecfile="$destdir/darwin_version.c"
rm -f "$thecfile"
echo "__attribute__((__used__)) const unsigned long __darwin_builder_version = $builder_version_int;" >> "$thecfile"
echo "__attribute__((__used__)) const unsigned long __darwin_builder_build = 0x$builder_build;" >> "$thecfile"
echo "__attribute__((__used__)) const char *__darwin_build_inc_version = \"$CURRENT_PROJECT_VERSION\";" >> "$thecfile"
echo "__attribute__((__used__)) const char *__darwin_version_string = \"$version_string\";" >> "$thecfile"
echo "__attribute__((__used__)) const char *__darwin_variant = \"$DARWIN_VARIANT\";" >> "$thecfile"
echo "__attribute__((__used__)) const char *__darwin_version_string_heywhat = \"@(#)VERSION:$version_string\";" >> "$thecfile"
echo "__attribute__((__used__)) const char *__darwin_debug_binary = \"$binarywithsyms\";" >> "$thecfile"

# Embed the Info.plist in the __TEXT,__info_plist section.
echo "__attribute__((__used__))" >> "$thecfile"

echo "__attribute__((__section__(\"__TEXT,__info_plist\")))" >> "$thecfile"
echo -n "static const char __darwin_info_plist[] = \"" >> "$thecfile"
echo -n "$infoplistcontents" | sed -e 's/\"/\\"/g' | tr -d '\n' >> "$thecfile"
echo "\";" >> "$thecfile"

echo "" >> "$thecfile"
