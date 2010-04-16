\subsection{Fractional Integration}
This example uses package fracdiff to compute the exponent of fractional integration as described on pp448-449.
Data is US GDP and Treasury Yields.
\begin{Scode}{}
data(gnptbill,package = "Ham94")
print( fdGPH(gnptbill$GNP) )
print( fdGPH(gnptbill$TBILL) )
\end{Scode}