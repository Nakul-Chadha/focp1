FROM gcc AS build-stage

ARG file_name
ENV FILE_NAME=${file_name}
WORKDIR /app
COPY . .
RUN gcc -o /c_prog $FILE_NAME
FROM busybox:glibc AS final
COPY --from=build-stage /c_prog /c_prog
CMD ["/c_prog"]