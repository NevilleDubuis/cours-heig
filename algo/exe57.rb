print('entrez la sentinelle : ')
sentinelle = gets.to_i
puts

tab = []

begin
  print('entrez une valeur : ')
  tab << gets.to_i
end until tab.last == sentinelle

tab.delete(sentinelle)

puts "\nvos valeur : [#{tab.reverse.join(', ')}]\n"
