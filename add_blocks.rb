a = File.read "nyelv.y"
a = a.scan(/%%.*%%/m)[0].split("\r\n")

current_token = ""
res = a.map do |e|
	e.gsub! /\{ \$\$.*?\}/, '' 
	e.gsub! /\t*$/, ''

	current_token = e.strip if e =~ /\A[a-z_]+/
	if e =~ /\A[a-z_]/ || e =~ /\A\t;/ || e.empty?
		e
	else
		n = (88 - e.length) / 8
		"#{e}#{"\t" * n}{ $$ = buildNode(#{current_token.upcase}, \"id1\", \"\", NULL, NULL, $$); }"
	end 
end.join "\r\n"
File.open("tmp", "w"){|file| file << res}

