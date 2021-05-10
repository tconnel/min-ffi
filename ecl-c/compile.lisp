(compile-file "identity.lisp" :system-p t)
(c:build-program "bin/identity"
                 :lisp-files '("identity.o"))
(quit)
