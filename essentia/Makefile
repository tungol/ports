# $FreeBSD$

# https://github.com/MTG/essentia/archive/v2.0.1.tar.gz
PORTNAME=	essentia
PORTVERSION=	2.0.1
CATEGORIES=	audio

USE_GITHUB=	yes
GH_ACCOUNT=	tungol
GH_COMMIT=	960b045

MAINTAINER=	essentia@tungol.org
COMMENT=	Analyze audio files

LICENSE=	AGPLv3

USES=		python:build \
		pkgconfig
LIB_DEPENDS=	libavcodec.so:${PORTSDIR}/multimedia/ffmpeg \
		libavformat.so:${PORTSDIR}/multimedia/ffmpeg \
		libavutil.so:${PORTSDIR}/multimedia/ffmpeg \
		libswresample.so:${PORTSDIR}/multimedia/ffmpeg \
		libfftw3f.so:${PORTSDIR}/math/fftw3-float \
		libsamplerate.so:${PORTSDIR}/audio/libsamplerate \
		libtag.so:${PORTSDIR}/audio/taglib \
		libyaml.so:${PORTSDIR}/textproc/libyaml

BUILD_DEPENDS=	fftw3.h:${PORTSDIR}/math/fftw3

do-configure:
	@cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} ${PYTHON_CMD} \
		./waf configure --with-example=streaming_extractor_music

do-build:
	@cd ${WRKSRC} && ${PYTHON_CMD} ./waf

do-install:
	@cd ${WRKSRC} && ${PYTHON_CMD} ./waf install --destdir=${STAGEDIR}

.include <bsd.port.mk>