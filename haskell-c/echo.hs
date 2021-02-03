import System.IO( isEOF )

-- Ideally...
-- main = getChar >>= putChar >> main

main = do
  eof <- isEOF
  if eof then
    return ()
  else do
    ch <- getChar
    putChar ch
    main

