theta <- (-300:300)*.01
corrs <- theta/(1+theta^2)
plot( theta, corrs, type="l")
grid(nx=2,ny=2)


