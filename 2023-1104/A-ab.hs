main :: IO ()
main = do
  _ <- getLine
  input <- getLine
  let ans = isAdjacent input
  putStrLn ans


isAdjacent :: String -> String
isAdjacent [] = "No"
isAdjacent [_] = "No"
isAdjacent (x:y:xs)
    | (x == 'a' && y == 'b') || (x == 'b' && y == 'a') = "Yes"
    | otherwise = isAdjacent (y:xs)