import Data.List

main :: IO ()
main = do
    input <- getContents
    let lists = map (map read) $ map words $ lines input
        ans = if isValidSudoku lists then "Yes" else "No"
    putStrLn ans

-- 各行、各列、各3x3のマス目に重複がないかを確認する
isValidSudoku :: [[Int]] -> Bool
isValidSudoku lists = all isListValid lists && all isListValid tLists && all isListValid subLists
    where
      tLists = transpose lists
      subLists = chunksOf 3 $ map transpose $ chunksOf 3 lists

-- リスト内に重複がないかを確認
isListValid :: [Int] -> Bool
isListValid row = nub row == row

-- リストをn分割する
-- chunksOf :: Int -> [[]] -> [[]]
chunksOf n [] = []
chunksOf n xs = as : chunksOf n bs
  where
    (as,bs) = splitAt n xs

