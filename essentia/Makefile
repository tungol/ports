# $FreeBSD$

PORTNAME=	essentia
PORTVERSION=	2.0.1.20141119
CATEGORIES=	audio

MAINTAINER=	ports@tungol.org
COMMENT=	Analyze audio files

LICENSE=	AGPLv3

# a lot of these are technically optional and could be broken into options
# need all of them to build streaming_extractor_music though
LIB_DEPENDS=	libavcodec.so:${PORTSDIR}/multimedia/ffmpeg \
		libavformat.so:${PORTSDIR}/multimedia/ffmpeg \
		libavutil.so:${PORTSDIR}/multimedia/ffmpeg \
		libswresample.so:${PORTSDIR}/multimedia/ffmpeg \
		libfftw3f.so:${PORTSDIR}/math/fftw3-float \
		libsamplerate.so:${PORTSDIR}/audio/libsamplerate \
		libtag.so:${PORTSDIR}/audio/taglib \
		libyaml.so:${PORTSDIR}/textproc/libyaml
BUILD_DEPENDS=	${LOCALBASE}/include/fftw3.h:${PORTSDIR}/math/fftw3

USES=		python:build \
		pkgconfig

USE_GITHUB=	yes
GH_ACCOUNT=	MTG
GH_COMMIT=	d5e3a6e
GH_TAGNAME=	${GH_COMMIT}

# this isn't the best, but waf doens't seem to respect the more specific
# env variables that the documentation says it does
CXXFLAGS+=	-I${LOCALBASE}/include \
		-std=c++11 \
		-Wno-static-float-init
LINKFLAGS+=	-L${LOCALBASE}/lib -lyaml -ltag -lfftw3f -lsamplerate \
		-lswresample -lavutil -lavcodec -lavformat
# portlint warns that CXXFLAGS is already added to CONFIGURE_ENV in bsd.pork.mk
# but that doens't seem to actually be true either
CONFIGURE_ENV+=	LINKFLAGS="${LINKFLAGS}" CXXFLAGS="${CXXFLAGS}"

# there's other examples and other configure targets, could do options
# see http://essentia.upf.edu/documentation/installing.html
do-configure:
	@cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} ${PYTHON_CMD} \
		./waf configure --with-example=streaming_extractor_music

do-build:
	@cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} ${PYTHON_CMD} ./waf

do-install:
	@cd ${WRKSRC} && ${PYTHON_CMD} ./waf install --destdir=${STAGEDIR}
	@cd ${WRKSRC} && ${MV} ./build/src/examples/streaming_extractor_music \
		${STAGEDIR}${PREFIX}/bin
	@cd ${STAGEDIR}${PREFIX} && ${MV} ./lib/pkgconfig/essentia.pc \
		./libdata/pkgconfig
	@cd ${STAGEDIR}${PREFIX} && ${RMDIR} ./lib/pkgconfig

.include <bsd.port.mk>
