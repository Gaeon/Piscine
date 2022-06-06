# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    perl                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 01:28:13 by gaeokim           #+#    #+#              #
#    Updated: 2022/06/06 01:31:11 by gaeokim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl
use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) 
{
	for (my $j = 0; $j < $x; $j++) 
	{
		if (int(rand($y) * 2) < $density) 
		{
			print "o";
		}
		else 
		{
			print ".";
		}
	}
	print "\n";
}