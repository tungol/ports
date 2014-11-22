# $FreeBSD$

PORTNAME=	ckmame
PORTVERSION=	0.11
CATEGORIES=	games
MASTER_SITES=	http://nih.at/ckmame/

MAINTAINER=	ports@tungol.org
COMMENT=	Check ROM sets for MAME

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libzip.so:${PORTSDIR}/archivers/libzip \
		libsqlite3.so:${PORTSDIR}/databases/sqlite3

GNU_CONFIGURE=	yes


OPTIONS_DEFINE=	LIBXML
LIBXML_DESC=	build with libxml2 for xml support
LIBXML_LIB_DEPENDS=	libxml2.so:${PORTSDIR}/textproc/libxml2

.include <bsd.port.mk>
