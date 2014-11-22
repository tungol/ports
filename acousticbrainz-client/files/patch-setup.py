--- setup.py.orig	2014-11-18 23:06:20 UTC
+++ setup.py
@@ -19,7 +19,6 @@ setup(
     packages=['abz'],
     package_data={'abz': ['default.conf']},
     scripts=['abzsubmit'],
-    data_files=[('bin', ['streaming_extractor_music'])],
     install_requires=['requests>2.4'],
     license='GPL3+',
     classifiers=[
