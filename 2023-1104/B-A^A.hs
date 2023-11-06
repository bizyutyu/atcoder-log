main :: IO ()
main = do
  input <- getLine 
  let ans = judgPower 0 $ read input
  putStrLn $ show ans


judgPower :: Integer -> Integer -> Integer
judgPower a b
    | a ^ a > b = -1
    | a ^ a == b = a
    | otherwise = judgPower (a+1) b