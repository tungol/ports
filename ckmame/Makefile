# $FreeBSD$

PORTNAME=	ckmame
PORTVERSION=	0.11
CATEGORIES=	gamesgamesgames
MASTER_SITES=	http://nih.at/ckmame/

MAINTAINER=	ckmame@tungol.org
COMMENT=	A program to check ROM sets for MAME

LICENSE=	BSD3CLAUSE

GNU_CONFIGURE=	yes
LIB_DEPENDS=	libzip.so:${PORTSDIR}/archivers/libzip \
		libsqlite3.so:${PORTSDIR}/databases/sqlite3

OPTIONS_DEFINE=	LIBXML
LIBXML_DESC=	build with libxml2 for xml support
LIBXML_LIB_DEPENDS=	libxml2.so:${PORTSDIR}/textproc/libxml2

.include <bsd.port.mk>
