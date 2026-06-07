#! /bin/sh -e

product="7933"
target="bga_evb"
if [ $# == 0 ];then
    if [ -n "${PROJECT}" ];then
        echo "Get Environment variable : ${PROJECT}"
        product=${PROJECT}
    fi
    if [ -n "${TARGET}" ];then
        echo "Get Environment variable : ${TARGET}"
        target=${TARGET}
    fi
else
    if [ -n "$1" ];then
        product=$1
    fi

    if [ -n "$2" ];then
        target=$2
    fi
fi
#Whatever $product is, we extract first numberfrom it. ex:mt7933_hdk=>7933
product=`echo "$product" | sed 's/[^0-9]*\([0-9]\+\).*/\1/'`

echo "Product : $product, Target : $target"
cd GCC
# origin sdk2.0
MAKE_PARAMETER="PRODUCT_VERSION=${product} MTK_WIFI_AP_ENABLE=y"
make clean $MAKE_PARAMETER;make -j8 $MAKE_PARAMETER;make prebuilt_install $MAKE_PARAMETER;make clean $MAKE_PARAMETER
MAKE_PARAMETER="PRODUCT_VERSION=${product} MTK_WIFI_AP_ENABLE=y  MTK_GCC_LTO_ENABLE=y"
make clean $MAKE_PARAMETER;make -j8 $MAKE_PARAMETER;make prebuilt_install $MAKE_PARAMETER;make clean $MAKE_PARAMETER

MAKE_PARAMETER="PRODUCT_VERSION=${product} MTK_WIFI_AP_ENABLE=n"
make clean $MAKE_PARAMETER;make -j8 $MAKE_PARAMETER;make prebuilt_install $MAKE_PARAMETER;make clean $MAKE_PARAMETER
MAKE_PARAMETER="PRODUCT_VERSION=${product} MTK_WIFI_AP_ENABLE=n  MTK_GCC_LTO_ENABLE=y"
make clean $MAKE_PARAMETER;make -j8 $MAKE_PARAMETER;make prebuilt_install $MAKE_PARAMETER;make clean $MAKE_PARAMETER

# origin sdk2.0 + p2p GC
MAKE_PARAMETER="PRODUCT_VERSION=${product} MTK_WIFI_AP_ENABLE=y MTK_MT7933_P2P_SUPPORT=y"
make clean $MAKE_PARAMETER;make -j8 $MAKE_PARAMETER;make prebuilt_install $MAKE_PARAMETER;make clean $MAKE_PARAMETER
MAKE_PARAMETER="PRODUCT_VERSION=${product} MTK_WIFI_AP_ENABLE=y MTK_MT7933_P2P_SUPPORT=y MTK_GCC_LTO_ENABLE=y"
make clean $MAKE_PARAMETER;make -j8 $MAKE_PARAMETER;make prebuilt_install $MAKE_PARAMETER;make clean $MAKE_PARAMETER

# wpa-enterprise
MAKE_PARAMETER="PRODUCT_VERSION=${product} MTK_WIFI_AP_ENABLE=y MTK_IEEE8021X_ENABLE=y"
make clean $MAKE_PARAMETER;make -j8 $MAKE_PARAMETER;make prebuilt_install $MAKE_PARAMETER;make clean $MAKE_PARAMETER
MAKE_PARAMETER="PRODUCT_VERSION=${product} MTK_WIFI_AP_ENABLE=y  MTK_GCC_LTO_ENABLE=y MTK_IEEE8021X_ENABLE=y"
make clean $MAKE_PARAMETER;make -j8 $MAKE_PARAMETER;make prebuilt_install $MAKE_PARAMETER;make clean $MAKE_PARAMETER

MAKE_PARAMETER="PRODUCT_VERSION=${product} MTK_WIFI_AP_ENABLE=n MTK_IEEE8021X_ENABLE=y"
make clean $MAKE_PARAMETER;make -j8 $MAKE_PARAMETER;make prebuilt_install $MAKE_PARAMETER;make clean $MAKE_PARAMETER
MAKE_PARAMETER="PRODUCT_VERSION=${product} MTK_WIFI_AP_ENABLE=n  MTK_GCC_LTO_ENABLE=y MTK_IEEE8021X_ENABLE=y"
make clean $MAKE_PARAMETER;make -j8 $MAKE_PARAMETER;make prebuilt_install $MAKE_PARAMETER;make clean $MAKE_PARAMETER


# mshrink
MAKE_PARAMETER="PRODUCT_VERSION=${product} MTK_WIFI_AP_ENABLE=y MTK_RELEASE_MODE=debug"
make clean $MAKE_PARAMETER;make -j8 $MAKE_PARAMETER;make prebuilt_install $MAKE_PARAMETER;make clean $MAKE_PARAMETER
MAKE_PARAMETER="PRODUCT_VERSION=${product} MTK_WIFI_AP_ENABLE=y MTK_RELEASE_MODE=release"
make clean $MAKE_PARAMETER;make -j8 $MAKE_PARAMETER;make prebuilt_install $MAKE_PARAMETER;make clean $MAKE_PARAMETER
MAKE_PARAMETER="PRODUCT_VERSION=${product} MTK_WIFI_AP_ENABLE=y MTK_GCC_LTO_ENABLE=y MTK_RELEASE_MODE=debug"
make clean $MAKE_PARAMETER;make -j8 $MAKE_PARAMETER;make prebuilt_install $MAKE_PARAMETER;make clean $MAKE_PARAMETER
MAKE_PARAMETER="PRODUCT_VERSION=${product} MTK_WIFI_AP_ENABLE=y MTK_GCC_LTO_ENABLE=y MTK_RELEASE_MODE=release"
make clean $MAKE_PARAMETER;make -j8 $MAKE_PARAMETER;make prebuilt_install $MAKE_PARAMETER;make clean $MAKE_PARAMETER

MAKE_PARAMETER="PRODUCT_VERSION=${product} MTK_WIFI_AP_ENABLE=n MTK_RELEASE_MODE=debug"
make clean $MAKE_PARAMETER;make -j8 $MAKE_PARAMETER;make prebuilt_install $MAKE_PARAMETER;make clean $MAKE_PARAMETER
MAKE_PARAMETER="PRODUCT_VERSION=${product} MTK_WIFI_AP_ENABLE=n MTK_RELEASE_MODE=release"
make clean $MAKE_PARAMETER;make -j8 $MAKE_PARAMETER;make prebuilt_install $MAKE_PARAMETER;make clean $MAKE_PARAMETER
MAKE_PARAMETER="PRODUCT_VERSION=${product} MTK_WIFI_AP_ENABLE=n MTK_GCC_LTO_ENABLE=y MTK_RELEASE_MODE=debug"
make clean $MAKE_PARAMETER;make -j8 $MAKE_PARAMETER;make prebuilt_install $MAKE_PARAMETER;make clean $MAKE_PARAMETER
MAKE_PARAMETER="PRODUCT_VERSION=${product} MTK_WIFI_AP_ENABLE=n MTK_GCC_LTO_ENABLE=y MTK_RELEASE_MODE=release"
make clean $MAKE_PARAMETER;make -j8 $MAKE_PARAMETER;make prebuilt_install $MAKE_PARAMETER;make clean $MAKE_PARAMETER

