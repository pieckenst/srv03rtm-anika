MAJORCOMP=ntos
MINORCOMP=FsRtl

TARGETNAME=FsRtl
TARGETTYPE=LIBRARY
TARGETPATH=obj

BUILD_PRODUCES=ntosfsrtl$(NT_UP)

INCLUDES=..;..\..\inc

MSC_WARNING_LEVEL=/W4 /WX

SOURCES=..\dbcsname.c \
        ..\fastio.c   \
        ..\faulttol.c \
        ..\filelock.c \
        ..\filter.c   \
        ..\filtrctx.c \
        ..\fsfilter.c \
        ..\fsrtlpc.c  \
        ..\largemcb.c \
        ..\name.c     \
        ..\notify.c   \
        ..\oplock.c   \
        ..\pnp.c      \
        ..\unc.c      \
        ..\tunnel.c   \
        ..\stackovf.c

PRECOMPILED_INCLUDE=..\fsrtlp.h
PRECOMPILED_PCH=fsrtlp.pch
PRECOMPILED_OBJ=fsrtlp.obj

SOURCES_USED=..\sources.inc
