/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.37
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * SlurmApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_SlurmApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_SlurmApi_H_



#include "slurmrestapi/ApiClient.h"

#include "slurmrestapi/model/Dbv0_0_37_account_info.h"
#include "slurmrestapi/model/Dbv0_0_37_account_response.h"
#include "slurmrestapi/model/Dbv0_0_37_associations_info.h"
#include "slurmrestapi/model/Dbv0_0_37_cluster_info.h"
#include "slurmrestapi/model/Dbv0_0_37_config_info.h"
#include "slurmrestapi/model/Dbv0_0_37_config_response.h"
#include "slurmrestapi/model/Dbv0_0_37_diag.h"
#include "slurmrestapi/model/Dbv0_0_37_job_info.h"
#include "slurmrestapi/model/Dbv0_0_37_qos_info.h"
#include "slurmrestapi/model/Dbv0_0_37_response_account_delete.h"
#include "slurmrestapi/model/Dbv0_0_37_response_association_delete.h"
#include "slurmrestapi/model/Dbv0_0_37_response_associations.h"
#include "slurmrestapi/model/Dbv0_0_37_response_cluster_add.h"
#include "slurmrestapi/model/Dbv0_0_37_response_cluster_delete.h"
#include "slurmrestapi/model/Dbv0_0_37_response_qos_delete.h"
#include "slurmrestapi/model/Dbv0_0_37_response_tres.h"
#include "slurmrestapi/model/Dbv0_0_37_response_user_delete.h"
#include "slurmrestapi/model/Dbv0_0_37_response_user_update.h"
#include "slurmrestapi/model/Dbv0_0_37_response_wckey_add.h"
#include "slurmrestapi/model/Dbv0_0_37_response_wckey_delete.h"
#include "slurmrestapi/model/Dbv0_0_37_tres_info.h"
#include "slurmrestapi/model/Dbv0_0_37_user_info.h"
#include "slurmrestapi/model/Dbv0_0_37_wckey_info.h"
#include "slurmrestapi/model/V0_0_37_diag.h"
#include "slurmrestapi/model/V0_0_37_job_properties.h"
#include "slurmrestapi/model/V0_0_37_job_submission.h"
#include "slurmrestapi/model/V0_0_37_job_submission_response.h"
#include "slurmrestapi/model/V0_0_37_jobs_response.h"
#include "slurmrestapi/model/V0_0_37_nodes_response.h"
#include "slurmrestapi/model/V0_0_37_partitions_response.h"
#include "slurmrestapi/model/V0_0_37_pings.h"
#include "slurmrestapi/model/V0_0_37_reservations_response.h"
#include "slurmrestapi/model/V0_0_37_signal.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  SlurmApi 
{
public:

    explicit SlurmApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~SlurmApi();

    /// <summary>
    /// cancel or signal job
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="jobId">Slurm Job ID</param>
    /// <param name="signal">signal to send to job (optional, default to new V0_0_37_signal())</param>
    pplx::task<void> slurmctldCancelJob(
        utility::string_t jobId,
        boost::optional<std::shared_ptr<V0_0_37_signal>> signal
    ) const;
    /// <summary>
    /// get diagnostics
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<V0_0_37_diag>> slurmctldDiag(
    ) const;
    /// <summary>
    /// get job info
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="jobId">Slurm JobID</param>
    pplx::task<std::shared_ptr<V0_0_37_jobs_response>> slurmctldGetJob(
        utility::string_t jobId
    ) const;
    /// <summary>
    /// get list of jobs
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="updateTime">Filter if changed since update_time. Use of this parameter can result in faster replies. (optional, default to 0L)</param>
    pplx::task<std::shared_ptr<V0_0_37_jobs_response>> slurmctldGetJobs(
        boost::optional<int64_t> updateTime
    ) const;
    /// <summary>
    /// get node info
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="nodeName">Slurm Node Name</param>
    pplx::task<std::shared_ptr<V0_0_37_nodes_response>> slurmctldGetNode(
        utility::string_t nodeName
    ) const;
    /// <summary>
    /// get all node info
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="updateTime">Filter if changed since update_time. Use of this parameter can result in faster replies. (optional, default to 0L)</param>
    pplx::task<std::shared_ptr<V0_0_37_nodes_response>> slurmctldGetNodes(
        boost::optional<int64_t> updateTime
    ) const;
    /// <summary>
    /// get partition info
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="partitionName">Slurm Partition Name</param>
    /// <param name="updateTime">Filter if there were no partition changes (not limited to partition in URL endpoint) since update_time. (optional, default to 0L)</param>
    pplx::task<std::shared_ptr<V0_0_37_partitions_response>> slurmctldGetPartition(
        utility::string_t partitionName,
        boost::optional<int64_t> updateTime
    ) const;
    /// <summary>
    /// get all partition info
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="updateTime">Filter if changed since update_time. Use of this parameter can result in faster replies. (optional, default to 0L)</param>
    pplx::task<std::shared_ptr<V0_0_37_partitions_response>> slurmctldGetPartitions(
        boost::optional<int64_t> updateTime
    ) const;
    /// <summary>
    /// get reservation info
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="reservationName">Slurm Reservation Name</param>
    /// <param name="updateTime">Filter if no reservation (not limited to reservation in URL) changed since update_time. (optional, default to 0L)</param>
    pplx::task<std::shared_ptr<V0_0_37_reservations_response>> slurmctldGetReservation(
        utility::string_t reservationName,
        boost::optional<int64_t> updateTime
    ) const;
    /// <summary>
    /// get all reservation info
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="updateTime">Filter if changed since update_time. Use of this parameter can result in faster replies. (optional, default to 0L)</param>
    pplx::task<std::shared_ptr<V0_0_37_reservations_response>> slurmctldGetReservations(
        boost::optional<int64_t> updateTime
    ) const;
    /// <summary>
    /// ping test
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<V0_0_37_pings>> slurmctldPing(
    ) const;
    /// <summary>
    /// submit new job
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="v0037JobSubmission">submit new job</param>
    pplx::task<std::shared_ptr<V0_0_37_job_submission_response>> slurmctldSubmitJob(
        std::shared_ptr<V0_0_37_job_submission> v0037JobSubmission
    ) const;
    /// <summary>
    /// update job
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="jobId">Slurm Job ID</param>
    /// <param name="v0037JobProperties">update job</param>
    pplx::task<void> slurmctldUpdateJob(
        utility::string_t jobId,
        std::shared_ptr<V0_0_37_job_properties> v0037JobProperties
    ) const;
    /// <summary>
    /// Add clusters
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<Dbv0_0_37_response_cluster_add>> slurmdbdAddClusters(
    ) const;
    /// <summary>
    /// Add wckeys
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<Dbv0_0_37_response_wckey_add>> slurmdbdAddWckeys(
    ) const;
    /// <summary>
    /// Delete account
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="accountName">Slurm Account Name</param>
    pplx::task<std::shared_ptr<Dbv0_0_37_response_account_delete>> slurmdbdDeleteAccount(
        utility::string_t accountName
    ) const;
    /// <summary>
    /// Delete association
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="account">Account name</param>
    /// <param name="user">User name</param>
    /// <param name="cluster">Cluster name (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="partition">Partition Name (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<Dbv0_0_37_response_association_delete>> slurmdbdDeleteAssociation(
        utility::string_t account,
        utility::string_t user,
        boost::optional<utility::string_t> cluster,
        boost::optional<utility::string_t> partition
    ) const;
    /// <summary>
    /// Delete cluster
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="clusterName">Slurm cluster name</param>
    pplx::task<std::shared_ptr<Dbv0_0_37_response_cluster_delete>> slurmdbdDeleteCluster(
        utility::string_t clusterName
    ) const;
    /// <summary>
    /// Delete QOS
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="qosName">Slurm QOS Name</param>
    pplx::task<std::shared_ptr<Dbv0_0_37_response_qos_delete>> slurmdbdDeleteQos(
        utility::string_t qosName
    ) const;
    /// <summary>
    /// Delete user
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userName">Slurm User Name</param>
    pplx::task<std::shared_ptr<Dbv0_0_37_response_user_delete>> slurmdbdDeleteUser(
        utility::string_t userName
    ) const;
    /// <summary>
    /// Delete wckey
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="wckey">Slurm wckey name</param>
    pplx::task<std::shared_ptr<Dbv0_0_37_response_wckey_delete>> slurmdbdDeleteWckey(
        utility::string_t wckey
    ) const;
    /// <summary>
    /// Get slurmdb diagnostics
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<Dbv0_0_37_diag>> slurmdbdDiag(
    ) const;
    /// <summary>
    /// Get account info
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="accountName">Slurm Account Name</param>
    pplx::task<std::shared_ptr<Dbv0_0_37_account_info>> slurmdbdGetAccount(
        utility::string_t accountName
    ) const;
    /// <summary>
    /// Get account list
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<Dbv0_0_37_account_info>> slurmdbdGetAccounts(
    ) const;
    /// <summary>
    /// Get association info
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="cluster">Cluster name (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="account">Account name (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="user">User name (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="partition">Partition Name (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<Dbv0_0_37_associations_info>> slurmdbdGetAssociation(
        boost::optional<utility::string_t> cluster,
        boost::optional<utility::string_t> account,
        boost::optional<utility::string_t> user,
        boost::optional<utility::string_t> partition
    ) const;
    /// <summary>
    /// Get association list
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<Dbv0_0_37_associations_info>> slurmdbdGetAssociations(
    ) const;
    /// <summary>
    /// Get cluster info
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="clusterName">Slurm cluster name</param>
    pplx::task<std::shared_ptr<Dbv0_0_37_cluster_info>> slurmdbdGetCluster(
        utility::string_t clusterName
    ) const;
    /// <summary>
    /// Get cluster list
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<Dbv0_0_37_cluster_info>> slurmdbdGetClusters(
    ) const;
    /// <summary>
    /// Dump all configuration information
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<Dbv0_0_37_config_info>> slurmdbdGetDbConfig(
    ) const;
    /// <summary>
    /// Get job info
    /// </summary>
    /// <remarks>
    /// This endpoint may return multiple job entries since job_id is not a unique key - only the tuple (cluster, job_id, start_time) is unique. If the requested job_id is a component of a heterogeneous job all components are returned.
    /// </remarks>
    /// <param name="jobId">Slurm Job ID</param>
    pplx::task<std::shared_ptr<Dbv0_0_37_job_info>> slurmdbdGetJob(
        int64_t jobId
    ) const;
    /// <summary>
    /// Get job list
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="submitTime">Filter by submission time  Accepted formats:  HH:MM[:SS] [AM|PM]  MMDD[YY] or MM/DD[/YY] or MM.DD[.YY]  MM/DD[/YY]-HH:MM[:SS]  YYYY-MM-DD[THH:MM[:SS]] (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="startTime">Filter by start time  Accepted formats:  HH:MM[:SS] [AM|PM]  MMDD[YY] or MM/DD[/YY] or MM.DD[.YY]  MM/DD[/YY]-HH:MM[:SS]  YYYY-MM-DD[THH:MM[:SS]] (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="endTime">Filter by end time  Accepted formats:  HH:MM[:SS] [AM|PM]  MMDD[YY] or MM/DD[/YY] or MM.DD[.YY]  MM/DD[/YY]-HH:MM[:SS]  YYYY-MM-DD[THH:MM[:SS]] (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="account">Comma delimited list of accounts to match (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="association">Comma delimited list of associations to match (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="cluster">Comma delimited list of cluster to match (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="constraints">Comma delimited list of constraints to match (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="cpusMax">Number of CPUs high range (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="cpusMin">Number of CPUs low range (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="skipSteps">Report job step information (optional, default to false)</param>
    /// <param name="disableWaitForResult">Disable waiting for result from slurmdbd (optional, default to false)</param>
    /// <param name="exitCode">Exit code of job (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="format">Comma delimited list of formats to match (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="group">Comma delimited list of groups to match (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="jobName">Comma delimited list of job names to match (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="nodesMax">Number of nodes high range (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="nodesMin">Number of nodes low range (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="partition">Comma delimited list of partitions to match (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="qos">Comma delimited list of QOS to match (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="reason">Comma delimited list of job reasons to match (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="reservation">Comma delimited list of reservations to match (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="state">Comma delimited list of states to match (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="step">Comma delimited list of job steps to match (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="node">Comma delimited list of used nodes to match (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="wckey">Comma delimited list of wckeys to match (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<Dbv0_0_37_job_info>> slurmdbdGetJobs(
        boost::optional<utility::string_t> submitTime,
        boost::optional<utility::string_t> startTime,
        boost::optional<utility::string_t> endTime,
        boost::optional<utility::string_t> account,
        boost::optional<utility::string_t> association,
        boost::optional<utility::string_t> cluster,
        boost::optional<utility::string_t> constraints,
        boost::optional<utility::string_t> cpusMax,
        boost::optional<utility::string_t> cpusMin,
        boost::optional<bool> skipSteps,
        boost::optional<bool> disableWaitForResult,
        boost::optional<utility::string_t> exitCode,
        boost::optional<utility::string_t> format,
        boost::optional<utility::string_t> group,
        boost::optional<utility::string_t> jobName,
        boost::optional<utility::string_t> nodesMax,
        boost::optional<utility::string_t> nodesMin,
        boost::optional<utility::string_t> partition,
        boost::optional<utility::string_t> qos,
        boost::optional<utility::string_t> reason,
        boost::optional<utility::string_t> reservation,
        boost::optional<utility::string_t> state,
        boost::optional<utility::string_t> step,
        boost::optional<utility::string_t> node,
        boost::optional<utility::string_t> wckey
    ) const;
    /// <summary>
    /// Get QOS list
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<Dbv0_0_37_qos_info>> slurmdbdGetQos(
    ) const;
    /// <summary>
    /// Get QOS info
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="qosName">Slurm QOS Name</param>
    pplx::task<std::shared_ptr<Dbv0_0_37_qos_info>> slurmdbdGetSingleQos(
        utility::string_t qosName
    ) const;
    /// <summary>
    /// Get TRES info
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<Dbv0_0_37_tres_info>> slurmdbdGetTres(
    ) const;
    /// <summary>
    /// Get user info
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userName">Slurm User Name</param>
    pplx::task<std::shared_ptr<Dbv0_0_37_user_info>> slurmdbdGetUser(
        utility::string_t userName
    ) const;
    /// <summary>
    /// Get user list
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<Dbv0_0_37_user_info>> slurmdbdGetUsers(
    ) const;
    /// <summary>
    /// Get wckey info
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="wckey">Slurm wckey name</param>
    pplx::task<std::shared_ptr<Dbv0_0_37_wckey_info>> slurmdbdGetWckey(
        utility::string_t wckey
    ) const;
    /// <summary>
    /// Get wckey list
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<Dbv0_0_37_wckey_info>> slurmdbdGetWckeys(
    ) const;
    /// <summary>
    /// Load all configuration information
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<Dbv0_0_37_config_response>> slurmdbdSetDbConfig(
    ) const;
    /// <summary>
    /// Update accounts
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<Dbv0_0_37_account_response>> slurmdbdUpdateAccount(
    ) const;
    /// <summary>
    /// Set associations info
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<Dbv0_0_37_response_associations>> slurmdbdUpdateAssociations(
    ) const;
    /// <summary>
    /// Set TRES info
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<Dbv0_0_37_response_tres>> slurmdbdUpdateTres(
    ) const;
    /// <summary>
    /// Update user
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<Dbv0_0_37_response_user_update>> slurmdbdUpdateUsers(
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_SlurmApi_H_ */

