# $FreeBSD$

PORTNAME=	acousticbrainz-client
PORTVERSION=	0.1
CATEGORIES=	audio

MAINTAINER=	ports@tungol.org
COMMENT=	Submit audio data to acousticbrainz

LICENSE=	GPLv3

RUN_DEPENDS=	streaming_extractor_music:${PORTSDIR}/audio/essentia \
	${PYTHON_SITELIBDIR}/requests/__init__.py:${PORTSDIR}/www/py-requests

USES=		python
USE_PYTHON=	distutils

USE_GITHUB=	yes
GH_ACCOUNT=	MTG
GH_COMMIT=	5af88e4
GH_TAGNAME=	${GH_COMMIT}

.include <bsd.port.mk>
