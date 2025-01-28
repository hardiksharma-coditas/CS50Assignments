--1
SELECT name FROM movies WHERE release_year=2008
--2
SELECT name FROM movies WHERE actors='Emma Stone'
--3
SELECT name FROM movies WHERE release_year>=2018 ORDER BY title ASC
--4
SELECT COUNT(*) AS ten_rating FROM movies WHERE imdb_rating=10.0;
--5
SELECT title,release_year FROM movies WHERE name='Harry Potter' ORDER BY release_year ASC;
--6
SELECT AVG(imdb) AS rating FROM movies WHERE release_year=2012
--7
SELECT name,imdb FROM movies WHERE release_year=2010 ORDER BY imdb DESC,name ASC
--8

--9