(compile-file "use_inc.lisp" :system-p t)
(c:build-program "bin/use_inc"
                 :lisp-files '("use_inc.o"))
(quit)
