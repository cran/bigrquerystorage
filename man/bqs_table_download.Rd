% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/bqs_download.R
\name{bqs_table_download}
\alias{bqs_table_download}
\title{Download table data}
\usage{
bqs_table_download(
  x,
  parent = getOption("bigquerystorage.project", ""),
  snapshot_time = NA,
  selected_fields = character(),
  row_restriction = "",
  sample_percentage,
  n_max = Inf,
  quiet = NA,
  as_tibble = lifecycle::deprecated(),
  bigint = c("integer", "integer64", "numeric", "character"),
  max_results = lifecycle::deprecated()
)
}
\arguments{
\item{x}{Table reference \verb{\{project\}.\{dataset\}.\{table_name\}}}

\item{parent}{Used as parent for \code{CreateReadSession}.
grpc method. Default is to use option \code{bigquerystorage.project} value.}

\item{snapshot_time}{Table modifier \verb{snapshot time} as \code{POSIXct}.}

\item{selected_fields}{Table read option \code{selected_fields}. A character vector of field to select from table.}

\item{row_restriction}{Table read option \code{row_restriction}. A character. SQL text filtering statement.}

\item{sample_percentage}{Table read option \code{sample_percentage}. A numeric \verb{0 <= sample_percentage <= 100}. Not compatible with \code{row_restriction}.}

\item{n_max}{Maximum number of results to retrieve. Use \code{Inf} or \code{-1L}
retrieve all rows.}

\item{quiet}{Should information be printed to console.}

\item{as_tibble}{Should data be returned as tibble. Default (FALSE) is to return
as arrow Table from raw IPC stream.}

\item{bigint}{The R type that BigQuery's 64-bit integer types should be mapped to.
The default is \code{"integer"} which returns R's \code{integer} type but results in \code{NA} for
values above/below +/- 2147483647. \code{"integer64"} returns a \link[bit64:bit64-package]{bit64::integer64},
which allows the full range of 64 bit integers.}

\item{max_results}{Deprecated}
}
\value{
This method returns a data.frame or optionally a tibble.
If you need a \code{data.frame}, leave parameter as_tibble to FALSE and coerce
the results with \code{\link[=as.data.frame]{as.data.frame()}}.
}
\description{
This retrieves rows block in a stream using a grpc protocol.
It is most suitable for results of larger queries (>100 MB, say).
}
\details{
More details about table modifiers and table options are available from the
API Reference documentation. (See \href{https://cloud.google.com/bigquery/docs/reference/storage/rpc/google.cloud.bigquery.storage.v1#tablemodifiers}{TableModifiers} and
\href{https://cloud.google.com/bigquery/docs/reference/storage/rpc/google.cloud.bigquery.storage.v1#tablereadoptions}{TableReadOptions})
}
