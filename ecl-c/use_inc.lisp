(require 'cffi)
(defpackage :cffi-user
  (:use :common-lisp :cffi))

(in-package :cffi-user)

(define-foreign-library libtest (:darwin "libtest.dylib") (:unix "libtest.so") (t (:default "libtest")))
(use-foreign-library libtest)
;(define-foreign-library libtest "libtest.so")
;(load-foreign_library "test.so")
(defctype inc-t :unsigned-int)

(quit)
