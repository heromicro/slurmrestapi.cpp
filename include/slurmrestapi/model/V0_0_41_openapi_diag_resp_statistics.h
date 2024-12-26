/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * V0_0_41_openapi_diag_resp_statistics.h
 *
 * statistics
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_diag_resp_statistics_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_diag_resp_statistics_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_41_openapi_diag_resp_statistics_job_states_ts.h"
#include "slurmrestapi/model/V0_0_41_openapi_diag_resp_statistics_pending_rpcs_by_hostlist_inner.h"
#include "slurmrestapi/model/V0_0_41_openapi_diag_resp_statistics_rpcs_by_user_inner.h"
#include "slurmrestapi/model/V0_0_41_openapi_diag_resp_statistics_rpcs_by_message_type_inner.h"
#include "slurmrestapi/model/V0_0_41_openapi_diag_resp_statistics_schedule_exit.h"
#include "slurmrestapi/model/V0_0_41_openapi_diag_resp_statistics_bf_exit.h"
#include "slurmrestapi/model/V0_0_41_openapi_diag_resp_statistics_bf_when_last_cycle.h"
#include "slurmrestapi/model/V0_0_41_openapi_diag_resp_statistics_req_time_start.h"
#include "slurmrestapi/model/V0_0_41_openapi_diag_resp_statistics_pending_rpcs_inner.h"
#include "slurmrestapi/model/V0_0_41_openapi_diag_resp_statistics_req_time.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_41_openapi_diag_resp_statistics_req_time;
class V0_0_41_openapi_diag_resp_statistics_req_time_start;
class V0_0_41_openapi_diag_resp_statistics_schedule_exit;
class V0_0_41_openapi_diag_resp_statistics_job_states_ts;
class V0_0_41_openapi_diag_resp_statistics_bf_exit;
class V0_0_41_openapi_diag_resp_statistics_bf_when_last_cycle;
class V0_0_41_openapi_diag_resp_statistics_rpcs_by_message_type_inner;
class V0_0_41_openapi_diag_resp_statistics_rpcs_by_user_inner;
class V0_0_41_openapi_diag_resp_statistics_pending_rpcs_inner;
class V0_0_41_openapi_diag_resp_statistics_pending_rpcs_by_hostlist_inner;


/// <summary>
/// statistics
/// </summary>
class  V0_0_41_openapi_diag_resp_statistics
    : public ModelBase
{
public:
    V0_0_41_openapi_diag_resp_statistics();
    virtual ~V0_0_41_openapi_diag_resp_statistics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_diag_resp_statistics members

    /// <summary>
    /// Zero if only RPC statistic included
    /// </summary>
    int32_t getPartsPacked() const;
    bool partsPackedIsSet() const;
    void unsetParts_packed();

    void setPartsPacked(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_req_time> getReqTime() const;
    bool reqTimeIsSet() const;
    void unsetReq_time();

    void setReqTime(const std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_req_time>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_req_time_start> getReqTimeStart() const;
    bool reqTimeStartIsSet() const;
    void unsetReq_time_start();

    void setReqTimeStart(const std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_req_time_start>& value);

    /// <summary>
    /// Number of current active slurmctld threads
    /// </summary>
    int32_t getServerThreadCount() const;
    bool serverThreadCountIsSet() const;
    void unsetServer_thread_count();

    void setServerThreadCount(int32_t value);

    /// <summary>
    /// Number of enqueued outgoing RPC requests in an internal retry list
    /// </summary>
    int32_t getAgentQueueSize() const;
    bool agentQueueSizeIsSet() const;
    void unsetAgent_queue_size();

    void setAgentQueueSize(int32_t value);

    /// <summary>
    /// Number of agent threads
    /// </summary>
    int32_t getAgentCount() const;
    bool agentCountIsSet() const;
    void unsetAgent_count();

    void setAgentCount(int32_t value);

    /// <summary>
    /// Total number of active threads created by all agent threads
    /// </summary>
    int32_t getAgentThreadCount() const;
    bool agentThreadCountIsSet() const;
    void unsetAgent_thread_count();

    void setAgentThreadCount(int32_t value);

    /// <summary>
    /// Number of messages for SlurmDBD that are queued
    /// </summary>
    int32_t getDbdAgentQueueSize() const;
    bool dbdAgentQueueSizeIsSet() const;
    void unsetDbd_agent_queue_size();

    void setDbdAgentQueueSize(int32_t value);

    /// <summary>
    /// Latency of 1000 calls to the gettimeofday() syscall in microseconds, as measured at controller startup
    /// </summary>
    int32_t getGettimeofdayLatency() const;
    bool gettimeofdayLatencyIsSet() const;
    void unsetGettimeofday_latency();

    void setGettimeofdayLatency(int32_t value);

    /// <summary>
    /// Max time of any scheduling cycle in microseconds since last reset
    /// </summary>
    int32_t getScheduleCycleMax() const;
    bool scheduleCycleMaxIsSet() const;
    void unsetSchedule_cycle_max();

    void setScheduleCycleMax(int32_t value);

    /// <summary>
    /// Time in microseconds for last scheduling cycle
    /// </summary>
    int32_t getScheduleCycleLast() const;
    bool scheduleCycleLastIsSet() const;
    void unsetSchedule_cycle_last();

    void setScheduleCycleLast(int32_t value);

    /// <summary>
    /// Total run time in microseconds for all scheduling cycles since last reset
    /// </summary>
    int32_t getScheduleCycleSum() const;
    bool scheduleCycleSumIsSet() const;
    void unsetSchedule_cycle_sum();

    void setScheduleCycleSum(int32_t value);

    /// <summary>
    /// Number of scheduling cycles since last reset
    /// </summary>
    int32_t getScheduleCycleTotal() const;
    bool scheduleCycleTotalIsSet() const;
    void unsetSchedule_cycle_total();

    void setScheduleCycleTotal(int32_t value);

    /// <summary>
    /// Mean time in microseconds for all scheduling cycles since last reset
    /// </summary>
    int64_t getScheduleCycleMean() const;
    bool scheduleCycleMeanIsSet() const;
    void unsetSchedule_cycle_mean();

    void setScheduleCycleMean(int64_t value);

    /// <summary>
    /// Mean of the number of jobs processed in a scheduling cycle
    /// </summary>
    int64_t getScheduleCycleMeanDepth() const;
    bool scheduleCycleMeanDepthIsSet() const;
    void unsetSchedule_cycle_mean_depth();

    void setScheduleCycleMeanDepth(int64_t value);

    /// <summary>
    /// Number of scheduling executions per minute
    /// </summary>
    int64_t getScheduleCyclePerMinute() const;
    bool scheduleCyclePerMinuteIsSet() const;
    void unsetSchedule_cycle_per_minute();

    void setScheduleCyclePerMinute(int64_t value);

    /// <summary>
    /// Total number of jobs processed in scheduling cycles
    /// </summary>
    int32_t getScheduleCycleDepth() const;
    bool scheduleCycleDepthIsSet() const;
    void unsetSchedule_cycle_depth();

    void setScheduleCycleDepth(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_schedule_exit> getScheduleExit() const;
    bool scheduleExitIsSet() const;
    void unsetSchedule_exit();

    void setScheduleExit(const std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_schedule_exit>& value);

    /// <summary>
    /// Number of jobs pending in queue
    /// </summary>
    int32_t getScheduleQueueLength() const;
    bool scheduleQueueLengthIsSet() const;
    void unsetSchedule_queue_length();

    void setScheduleQueueLength(int32_t value);

    /// <summary>
    /// Number of jobs submitted since last reset
    /// </summary>
    int32_t getJobsSubmitted() const;
    bool jobsSubmittedIsSet() const;
    void unsetJobs_submitted();

    void setJobsSubmitted(int32_t value);

    /// <summary>
    /// Number of jobs started since last reset
    /// </summary>
    int32_t getJobsStarted() const;
    bool jobsStartedIsSet() const;
    void unsetJobs_started();

    void setJobsStarted(int32_t value);

    /// <summary>
    /// Number of jobs completed since last reset
    /// </summary>
    int32_t getJobsCompleted() const;
    bool jobsCompletedIsSet() const;
    void unsetJobs_completed();

    void setJobsCompleted(int32_t value);

    /// <summary>
    /// Number of jobs canceled since the last reset
    /// </summary>
    int32_t getJobsCanceled() const;
    bool jobsCanceledIsSet() const;
    void unsetJobs_canceled();

    void setJobsCanceled(int32_t value);

    /// <summary>
    /// Number of jobs failed due to slurmd or other internal issues since last reset
    /// </summary>
    int32_t getJobsFailed() const;
    bool jobsFailedIsSet() const;
    void unsetJobs_failed();

    void setJobsFailed(int32_t value);

    /// <summary>
    /// Number of jobs pending at the time of listed in job_state_ts
    /// </summary>
    int32_t getJobsPending() const;
    bool jobsPendingIsSet() const;
    void unsetJobs_pending();

    void setJobsPending(int32_t value);

    /// <summary>
    /// Number of jobs running at the time of listed in job_state_ts
    /// </summary>
    int32_t getJobsRunning() const;
    bool jobsRunningIsSet() const;
    void unsetJobs_running();

    void setJobsRunning(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_job_states_ts> getJobStatesTs() const;
    bool jobStatesTsIsSet() const;
    void unsetJob_states_ts();

    void setJobStatesTs(const std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_job_states_ts>& value);

    /// <summary>
    /// Number of jobs started through backfilling since last slurm start
    /// </summary>
    int32_t getBfBackfilledJobs() const;
    bool bfBackfilledJobsIsSet() const;
    void unsetBf_backfilled_jobs();

    void setBfBackfilledJobs(int32_t value);

    /// <summary>
    /// Number of jobs started through backfilling since last reset
    /// </summary>
    int32_t getBfLastBackfilledJobs() const;
    bool bfLastBackfilledJobsIsSet() const;
    void unsetBf_last_backfilled_jobs();

    void setBfLastBackfilledJobs(int32_t value);

    /// <summary>
    /// Number of heterogeneous job components started through backfilling since last Slurm start
    /// </summary>
    int32_t getBfBackfilledHetJobs() const;
    bool bfBackfilledHetJobsIsSet() const;
    void unsetBf_backfilled_het_jobs();

    void setBfBackfilledHetJobs(int32_t value);

    /// <summary>
    /// Number of backfill scheduling cycles since last reset
    /// </summary>
    int32_t getBfCycleCounter() const;
    bool bfCycleCounterIsSet() const;
    void unsetBf_cycle_counter();

    void setBfCycleCounter(int32_t value);

    /// <summary>
    /// Mean time in microseconds of backfilling scheduling cycles since last reset
    /// </summary>
    int64_t getBfCycleMean() const;
    bool bfCycleMeanIsSet() const;
    void unsetBf_cycle_mean();

    void setBfCycleMean(int64_t value);

    /// <summary>
    /// Mean number of eligible to run jobs processed during all backfilling scheduling cycles since last reset
    /// </summary>
    int64_t getBfDepthMean() const;
    bool bfDepthMeanIsSet() const;
    void unsetBf_depth_mean();

    void setBfDepthMean(int64_t value);

    /// <summary>
    /// The subset of Depth Mean that the backfill scheduler attempted to schedule
    /// </summary>
    int64_t getBfDepthMeanTry() const;
    bool bfDepthMeanTryIsSet() const;
    void unsetBf_depth_mean_try();

    void setBfDepthMeanTry(int64_t value);

    /// <summary>
    /// Total time in microseconds of backfilling scheduling cycles since last reset
    /// </summary>
    int64_t getBfCycleSum() const;
    bool bfCycleSumIsSet() const;
    void unsetBf_cycle_sum();

    void setBfCycleSum(int64_t value);

    /// <summary>
    /// Execution time in microseconds of last backfill scheduling cycle
    /// </summary>
    int32_t getBfCycleLast() const;
    bool bfCycleLastIsSet() const;
    void unsetBf_cycle_last();

    void setBfCycleLast(int32_t value);

    /// <summary>
    /// Execution time in microseconds of longest backfill scheduling cycle
    /// </summary>
    int32_t getBfCycleMax() const;
    bool bfCycleMaxIsSet() const;
    void unsetBf_cycle_max();

    void setBfCycleMax(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_bf_exit> getBfExit() const;
    bool bfExitIsSet() const;
    void unsetBf_exit();

    void setBfExit(const std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_bf_exit>& value);

    /// <summary>
    /// Number of processed jobs during last backfilling scheduling cycle
    /// </summary>
    int32_t getBfLastDepth() const;
    bool bfLastDepthIsSet() const;
    void unsetBf_last_depth();

    void setBfLastDepth(int32_t value);

    /// <summary>
    /// Number of processed jobs during last backfilling scheduling cycle that had a chance to start using available resources
    /// </summary>
    int32_t getBfLastDepthTry() const;
    bool bfLastDepthTryIsSet() const;
    void unsetBf_last_depth_try();

    void setBfLastDepthTry(int32_t value);

    /// <summary>
    /// Total number of jobs processed during all backfilling scheduling cycles since last reset
    /// </summary>
    int32_t getBfDepthSum() const;
    bool bfDepthSumIsSet() const;
    void unsetBf_depth_sum();

    void setBfDepthSum(int32_t value);

    /// <summary>
    /// Subset of bf_depth_sum that the backfill scheduler attempted to schedule
    /// </summary>
    int32_t getBfDepthTrySum() const;
    bool bfDepthTrySumIsSet() const;
    void unsetBf_depth_try_sum();

    void setBfDepthTrySum(int32_t value);

    /// <summary>
    /// Number of jobs pending to be processed by backfilling algorithm
    /// </summary>
    int32_t getBfQueueLen() const;
    bool bfQueueLenIsSet() const;
    void unsetBf_queue_len();

    void setBfQueueLen(int32_t value);

    /// <summary>
    /// Mean number of jobs pending to be processed by backfilling algorithm
    /// </summary>
    int64_t getBfQueueLenMean() const;
    bool bfQueueLenMeanIsSet() const;
    void unsetBf_queue_len_mean();

    void setBfQueueLenMean(int64_t value);

    /// <summary>
    /// Total number of jobs pending to be processed by backfilling algorithm since last reset
    /// </summary>
    int32_t getBfQueueLenSum() const;
    bool bfQueueLenSumIsSet() const;
    void unsetBf_queue_len_sum();

    void setBfQueueLenSum(int32_t value);

    /// <summary>
    /// Number of different time slots tested by the backfill scheduler in its last iteration
    /// </summary>
    int32_t getBfTableSize() const;
    bool bfTableSizeIsSet() const;
    void unsetBf_table_size();

    void setBfTableSize(int32_t value);

    /// <summary>
    /// Total number of different time slots tested by the backfill scheduler
    /// </summary>
    int32_t getBfTableSizeSum() const;
    bool bfTableSizeSumIsSet() const;
    void unsetBf_table_size_sum();

    void setBfTableSizeSum(int32_t value);

    /// <summary>
    /// Mean number of different time slots tested by the backfill scheduler
    /// </summary>
    int64_t getBfTableSizeMean() const;
    bool bfTableSizeMeanIsSet() const;
    void unsetBf_table_size_mean();

    void setBfTableSizeMean(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_bf_when_last_cycle> getBfWhenLastCycle() const;
    bool bfWhenLastCycleIsSet() const;
    void unsetBf_when_last_cycle();

    void setBfWhenLastCycle(const std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_bf_when_last_cycle>& value);

    /// <summary>
    /// Backfill scheduler currently running
    /// </summary>
    bool isBfActive() const;
    bool bfActiveIsSet() const;
    void unsetBf_active();

    void setBfActive(bool value);

    /// <summary>
    /// Most frequently issued remote procedure calls (RPCs)
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_rpcs_by_message_type_inner>>& getRpcsByMessageType();
    bool rpcsByMessageTypeIsSet() const;
    void unsetRpcs_by_message_type();

    void setRpcsByMessageType(const std::vector<std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_rpcs_by_message_type_inner>>& value);

    /// <summary>
    /// RPCs issued by user ID
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_rpcs_by_user_inner>>& getRpcsByUser();
    bool rpcsByUserIsSet() const;
    void unsetRpcs_by_user();

    void setRpcsByUser(const std::vector<std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_rpcs_by_user_inner>>& value);

    /// <summary>
    /// Pending RPC statistics
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_pending_rpcs_inner>>& getPendingRpcs();
    bool pendingRpcsIsSet() const;
    void unsetPending_rpcs();

    void setPendingRpcs(const std::vector<std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_pending_rpcs_inner>>& value);

    /// <summary>
    /// Pending RPCs hostlists
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_pending_rpcs_by_hostlist_inner>>& getPendingRpcsByHostlist();
    bool pendingRpcsByHostlistIsSet() const;
    void unsetPending_rpcs_by_hostlist();

    void setPendingRpcsByHostlist(const std::vector<std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_pending_rpcs_by_hostlist_inner>>& value);


protected:
    int32_t m_Parts_packed;
    bool m_Parts_packedIsSet;
    std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_req_time> m_Req_time;
    bool m_Req_timeIsSet;
    std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_req_time_start> m_Req_time_start;
    bool m_Req_time_startIsSet;
    int32_t m_Server_thread_count;
    bool m_Server_thread_countIsSet;
    int32_t m_Agent_queue_size;
    bool m_Agent_queue_sizeIsSet;
    int32_t m_Agent_count;
    bool m_Agent_countIsSet;
    int32_t m_Agent_thread_count;
    bool m_Agent_thread_countIsSet;
    int32_t m_Dbd_agent_queue_size;
    bool m_Dbd_agent_queue_sizeIsSet;
    int32_t m_Gettimeofday_latency;
    bool m_Gettimeofday_latencyIsSet;
    int32_t m_Schedule_cycle_max;
    bool m_Schedule_cycle_maxIsSet;
    int32_t m_Schedule_cycle_last;
    bool m_Schedule_cycle_lastIsSet;
    int32_t m_Schedule_cycle_sum;
    bool m_Schedule_cycle_sumIsSet;
    int32_t m_Schedule_cycle_total;
    bool m_Schedule_cycle_totalIsSet;
    int64_t m_Schedule_cycle_mean;
    bool m_Schedule_cycle_meanIsSet;
    int64_t m_Schedule_cycle_mean_depth;
    bool m_Schedule_cycle_mean_depthIsSet;
    int64_t m_Schedule_cycle_per_minute;
    bool m_Schedule_cycle_per_minuteIsSet;
    int32_t m_Schedule_cycle_depth;
    bool m_Schedule_cycle_depthIsSet;
    std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_schedule_exit> m_Schedule_exit;
    bool m_Schedule_exitIsSet;
    int32_t m_Schedule_queue_length;
    bool m_Schedule_queue_lengthIsSet;
    int32_t m_Jobs_submitted;
    bool m_Jobs_submittedIsSet;
    int32_t m_Jobs_started;
    bool m_Jobs_startedIsSet;
    int32_t m_Jobs_completed;
    bool m_Jobs_completedIsSet;
    int32_t m_Jobs_canceled;
    bool m_Jobs_canceledIsSet;
    int32_t m_Jobs_failed;
    bool m_Jobs_failedIsSet;
    int32_t m_Jobs_pending;
    bool m_Jobs_pendingIsSet;
    int32_t m_Jobs_running;
    bool m_Jobs_runningIsSet;
    std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_job_states_ts> m_Job_states_ts;
    bool m_Job_states_tsIsSet;
    int32_t m_Bf_backfilled_jobs;
    bool m_Bf_backfilled_jobsIsSet;
    int32_t m_Bf_last_backfilled_jobs;
    bool m_Bf_last_backfilled_jobsIsSet;
    int32_t m_Bf_backfilled_het_jobs;
    bool m_Bf_backfilled_het_jobsIsSet;
    int32_t m_Bf_cycle_counter;
    bool m_Bf_cycle_counterIsSet;
    int64_t m_Bf_cycle_mean;
    bool m_Bf_cycle_meanIsSet;
    int64_t m_Bf_depth_mean;
    bool m_Bf_depth_meanIsSet;
    int64_t m_Bf_depth_mean_try;
    bool m_Bf_depth_mean_tryIsSet;
    int64_t m_Bf_cycle_sum;
    bool m_Bf_cycle_sumIsSet;
    int32_t m_Bf_cycle_last;
    bool m_Bf_cycle_lastIsSet;
    int32_t m_Bf_cycle_max;
    bool m_Bf_cycle_maxIsSet;
    std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_bf_exit> m_Bf_exit;
    bool m_Bf_exitIsSet;
    int32_t m_Bf_last_depth;
    bool m_Bf_last_depthIsSet;
    int32_t m_Bf_last_depth_try;
    bool m_Bf_last_depth_tryIsSet;
    int32_t m_Bf_depth_sum;
    bool m_Bf_depth_sumIsSet;
    int32_t m_Bf_depth_try_sum;
    bool m_Bf_depth_try_sumIsSet;
    int32_t m_Bf_queue_len;
    bool m_Bf_queue_lenIsSet;
    int64_t m_Bf_queue_len_mean;
    bool m_Bf_queue_len_meanIsSet;
    int32_t m_Bf_queue_len_sum;
    bool m_Bf_queue_len_sumIsSet;
    int32_t m_Bf_table_size;
    bool m_Bf_table_sizeIsSet;
    int32_t m_Bf_table_size_sum;
    bool m_Bf_table_size_sumIsSet;
    int64_t m_Bf_table_size_mean;
    bool m_Bf_table_size_meanIsSet;
    std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_bf_when_last_cycle> m_Bf_when_last_cycle;
    bool m_Bf_when_last_cycleIsSet;
    bool m_Bf_active;
    bool m_Bf_activeIsSet;
    std::vector<std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_rpcs_by_message_type_inner>> m_Rpcs_by_message_type;
    bool m_Rpcs_by_message_typeIsSet;
    std::vector<std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_rpcs_by_user_inner>> m_Rpcs_by_user;
    bool m_Rpcs_by_userIsSet;
    std::vector<std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_pending_rpcs_inner>> m_Pending_rpcs;
    bool m_Pending_rpcsIsSet;
    std::vector<std::shared_ptr<V0_0_41_openapi_diag_resp_statistics_pending_rpcs_by_hostlist_inner>> m_Pending_rpcs_by_hostlist;
    bool m_Pending_rpcs_by_hostlistIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_diag_resp_statistics_H_ */
