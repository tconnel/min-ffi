; all equivalent streams
;; (princ "hello world")
;; (terpri)
;; 
;; (write (format nil "hello world~&") :escape nil :readably nil)
;; 
;; (princ (format nil "hello world~&"))

(defun id (x) x)
(sb-ext:save-lisp-and-die :executable t)
