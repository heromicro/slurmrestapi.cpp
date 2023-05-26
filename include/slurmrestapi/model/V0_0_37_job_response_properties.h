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
 * V0_0_37_job_response_properties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_37_job_response_properties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_37_job_response_properties_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "slurmrestapi/model/V0_0_37_job_resources.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_37_job_resources;

/// <summary>
/// 
/// </summary>
class  V0_0_37_job_response_properties
    : public ModelBase
{
public:
    V0_0_37_job_response_properties();
    virtual ~V0_0_37_job_response_properties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_37_job_response_properties members

    /// <summary>
    /// Charge resources used by this job to specified account
    /// </summary>
    utility::string_t getAccount() const;
    bool accountIsSet() const;
    void unsetAccount();

    void setAccount(const utility::string_t& value);

    /// <summary>
    /// time job is eligible for running
    /// </summary>
    int64_t getAccrueTime() const;
    bool accrueTimeIsSet() const;
    void unsetAccrue_time();

    void setAccrueTime(int64_t value);

    /// <summary>
    /// administrator&#39;s arbitrary comment
    /// </summary>
    utility::string_t getAdminComment() const;
    bool adminCommentIsSet() const;
    void unsetAdmin_comment();

    void setAdminComment(const utility::string_t& value);

    /// <summary>
    /// job_id of a job array or 0 if N/A
    /// </summary>
    utility::string_t getArrayJobId() const;
    bool arrayJobIdIsSet() const;
    void unsetArray_job_id();

    void setArrayJobId(const utility::string_t& value);

    /// <summary>
    /// task_id of a job array
    /// </summary>
    utility::string_t getArrayTaskId() const;
    bool arrayTaskIdIsSet() const;
    void unsetArray_task_id();

    void setArrayTaskId(const utility::string_t& value);

    /// <summary>
    /// Maximum number of running array tasks
    /// </summary>
    utility::string_t getArrayMaxTasks() const;
    bool arrayMaxTasksIsSet() const;
    void unsetArray_max_tasks();

    void setArrayMaxTasks(const utility::string_t& value);

    /// <summary>
    /// string expression of task IDs in this record
    /// </summary>
    utility::string_t getArrayTaskString() const;
    bool arrayTaskStringIsSet() const;
    void unsetArray_task_string();

    void setArrayTaskString(const utility::string_t& value);

    /// <summary>
    /// association id for job
    /// </summary>
    utility::string_t getAssociationId() const;
    bool associationIdIsSet() const;
    void unsetAssociation_id();

    void setAssociationId(const utility::string_t& value);

    /// <summary>
    /// features required for batch script&#39;s node
    /// </summary>
    utility::string_t getBatchFeatures() const;
    bool batchFeaturesIsSet() const;
    void unsetBatch_features();

    void setBatchFeatures(const utility::string_t& value);

    /// <summary>
    /// if batch: queued job with script
    /// </summary>
    bool isBatchFlag() const;
    bool batchFlagIsSet() const;
    void unsetBatch_flag();

    void setBatchFlag(bool value);

    /// <summary>
    /// name of host running batch script
    /// </summary>
    utility::string_t getBatchHost() const;
    bool batchHostIsSet() const;
    void unsetBatch_host();

    void setBatchHost(const utility::string_t& value);

    /// <summary>
    /// Job flags
    /// </summary>
    std::vector<utility::string_t>& getFlags();
    bool flagsIsSet() const;
    void unsetFlags();

    void setFlags(const std::vector<utility::string_t>& value);

    /// <summary>
    /// burst buffer specifications
    /// </summary>
    utility::string_t getBurstBuffer() const;
    bool burstBufferIsSet() const;
    void unsetBurst_buffer();

    void setBurstBuffer(const utility::string_t& value);

    /// <summary>
    /// burst buffer state info
    /// </summary>
    utility::string_t getBurstBufferState() const;
    bool burstBufferStateIsSet() const;
    void unsetBurst_buffer_state();

    void setBurstBufferState(const utility::string_t& value);

    /// <summary>
    /// name of cluster that the job is on
    /// </summary>
    utility::string_t getCluster() const;
    bool clusterIsSet() const;
    void unsetCluster();

    void setCluster(const utility::string_t& value);

    /// <summary>
    /// comma separated list of required cluster features
    /// </summary>
    utility::string_t getClusterFeatures() const;
    bool clusterFeaturesIsSet() const;
    void unsetCluster_features();

    void setClusterFeatures(const utility::string_t& value);

    /// <summary>
    /// command to be executed
    /// </summary>
    utility::string_t getCommand() const;
    bool commandIsSet() const;
    void unsetCommand();

    void setCommand(const utility::string_t& value);

    /// <summary>
    /// arbitrary comment
    /// </summary>
    utility::string_t getComment() const;
    bool commentIsSet() const;
    void unsetComment();

    void setComment(const utility::string_t& value);

    /// <summary>
    /// job requires contiguous nodes
    /// </summary>
    bool isContiguous() const;
    bool contiguousIsSet() const;
    void unsetContiguous();

    void setContiguous(bool value);

    /// <summary>
    /// specialized core count
    /// </summary>
    utility::string_t getCoreSpec() const;
    bool coreSpecIsSet() const;
    void unsetCore_spec();

    void setCoreSpec(const utility::string_t& value);

    /// <summary>
    /// specialized thread count
    /// </summary>
    utility::string_t getThreadSpec() const;
    bool threadSpecIsSet() const;
    void unsetThread_spec();

    void setThreadSpec(const utility::string_t& value);

    /// <summary>
    /// cores per socket required by job
    /// </summary>
    utility::string_t getCoresPerSocket() const;
    bool coresPerSocketIsSet() const;
    void unsetCores_per_socket();

    void setCoresPerSocket(const utility::string_t& value);

    /// <summary>
    /// billable TRES
    /// </summary>
    utility::string_t getBillableTres() const;
    bool billableTresIsSet() const;
    void unsetBillable_tres();

    void setBillableTres(const utility::string_t& value);

    /// <summary>
    /// number of processors required for each task
    /// </summary>
    utility::string_t getCpusPerTask() const;
    bool cpusPerTaskIsSet() const;
    void unsetCpus_per_task();

    void setCpusPerTask(const utility::string_t& value);

    /// <summary>
    /// Minimum cpu frequency
    /// </summary>
    utility::string_t getCpuFrequencyMinimum() const;
    bool cpuFrequencyMinimumIsSet() const;
    void unsetCpu_frequency_minimum();

    void setCpuFrequencyMinimum(const utility::string_t& value);

    /// <summary>
    /// Maximum cpu frequency
    /// </summary>
    utility::string_t getCpuFrequencyMaximum() const;
    bool cpuFrequencyMaximumIsSet() const;
    void unsetCpu_frequency_maximum();

    void setCpuFrequencyMaximum(const utility::string_t& value);

    /// <summary>
    /// cpu frequency governor
    /// </summary>
    utility::string_t getCpuFrequencyGovernor() const;
    bool cpuFrequencyGovernorIsSet() const;
    void unsetCpu_frequency_governor();

    void setCpuFrequencyGovernor(const utility::string_t& value);

    /// <summary>
    /// semicolon delimited list of TRES&#x3D;# values
    /// </summary>
    utility::string_t getCpusPerTres() const;
    bool cpusPerTresIsSet() const;
    void unsetCpus_per_tres();

    void setCpusPerTres(const utility::string_t& value);

    /// <summary>
    /// job start deadline 
    /// </summary>
    utility::string_t getDeadline() const;
    bool deadlineIsSet() const;
    void unsetDeadline();

    void setDeadline(const utility::string_t& value);

    /// <summary>
    /// command to be executed
    /// </summary>
    utility::string_t getDelayBoot() const;
    bool delayBootIsSet() const;
    void unsetDelay_boot();

    void setDelayBoot(const utility::string_t& value);

    /// <summary>
    /// synchronize job execution with other jobs
    /// </summary>
    utility::string_t getDependency() const;
    bool dependencyIsSet() const;
    void unsetDependency();

    void setDependency(const utility::string_t& value);

    /// <summary>
    /// highest exit code of all job steps
    /// </summary>
    utility::string_t getDerivedExitCode() const;
    bool derivedExitCodeIsSet() const;
    void unsetDerived_exit_code();

    void setDerivedExitCode(const utility::string_t& value);

    /// <summary>
    /// time job is eligible for running
    /// </summary>
    int64_t getEligibleTime() const;
    bool eligibleTimeIsSet() const;
    void unsetEligible_time();

    void setEligibleTime(int64_t value);

    /// <summary>
    /// time of termination, actual or expected
    /// </summary>
    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetEnd_time();

    void setEndTime(int64_t value);

    /// <summary>
    /// comma separated list of excluded nodes
    /// </summary>
    utility::string_t getExcludedNodes() const;
    bool excludedNodesIsSet() const;
    void unsetExcluded_nodes();

    void setExcludedNodes(const utility::string_t& value);

    /// <summary>
    /// exit code for job
    /// </summary>
    int32_t getExitCode() const;
    bool exitCodeIsSet() const;
    void unsetExit_code();

    void setExitCode(int32_t value);

    /// <summary>
    /// comma separated list of required features
    /// </summary>
    utility::string_t getFeatures() const;
    bool featuresIsSet() const;
    void unsetFeatures();

    void setFeatures(const utility::string_t& value);

    /// <summary>
    /// Origin cluster&#39;s name
    /// </summary>
    utility::string_t getFederationOrigin() const;
    bool federationOriginIsSet() const;
    void unsetFederation_origin();

    void setFederationOrigin(const utility::string_t& value);

    /// <summary>
    /// string of active sibling names
    /// </summary>
    utility::string_t getFederationSiblingsActive() const;
    bool federationSiblingsActiveIsSet() const;
    void unsetFederation_siblings_active();

    void setFederationSiblingsActive(const utility::string_t& value);

    /// <summary>
    /// string of viable sibling names
    /// </summary>
    utility::string_t getFederationSiblingsViable() const;
    bool federationSiblingsViableIsSet() const;
    void unsetFederation_siblings_viable();

    void setFederationSiblingsViable(const utility::string_t& value);

    /// <summary>
    /// Job flags
    /// </summary>
    std::vector<utility::string_t>& getGresDetail();
    bool gresDetailIsSet() const;
    void unsetGres_detail();

    void setGresDetail(const std::vector<utility::string_t>& value);

    /// <summary>
    /// group job submitted as
    /// </summary>
    utility::string_t getGroupId() const;
    bool groupIdIsSet() const;
    void unsetGroup_id();

    void setGroupId(const utility::string_t& value);

    /// <summary>
    /// job ID
    /// </summary>
    utility::string_t getJobId() const;
    bool jobIdIsSet() const;
    void unsetJob_id();

    void setJobId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_37_job_resources> getJobResources() const;
    bool jobResourcesIsSet() const;
    void unsetJob_resources();

    void setJobResources(const std::shared_ptr<V0_0_37_job_resources>& value);

    /// <summary>
    /// state of the job
    /// </summary>
    utility::string_t getJobState() const;
    bool jobStateIsSet() const;
    void unsetJob_state();

    void setJobState(const utility::string_t& value);

    /// <summary>
    /// last time job was evaluated for scheduling
    /// </summary>
    utility::string_t getLastSchedEvaluation() const;
    bool lastSchedEvaluationIsSet() const;
    void unsetLast_sched_evaluation();

    void setLastSchedEvaluation(const utility::string_t& value);

    /// <summary>
    /// licenses required by the job
    /// </summary>
    utility::string_t getLicenses() const;
    bool licensesIsSet() const;
    void unsetLicenses();

    void setLicenses(const utility::string_t& value);

    /// <summary>
    /// maximum number of cpus usable by job
    /// </summary>
    utility::string_t getMaxCpus() const;
    bool maxCpusIsSet() const;
    void unsetMax_cpus();

    void setMaxCpus(const utility::string_t& value);

    /// <summary>
    /// maximum number of nodes usable by job
    /// </summary>
    utility::string_t getMaxNodes() const;
    bool maxNodesIsSet() const;
    void unsetMax_nodes();

    void setMaxNodes(const utility::string_t& value);

    /// <summary>
    /// mcs_label if mcs plugin in use
    /// </summary>
    utility::string_t getMcsLabel() const;
    bool mcsLabelIsSet() const;
    void unsetMcs_label();

    void setMcsLabel(const utility::string_t& value);

    /// <summary>
    /// semicolon delimited list of TRES&#x3D;# values
    /// </summary>
    utility::string_t getMemoryPerTres() const;
    bool memoryPerTresIsSet() const;
    void unsetMemory_per_tres();

    void setMemoryPerTres(const utility::string_t& value);

    /// <summary>
    /// name of the job
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// list of nodes allocated to job
    /// </summary>
    utility::string_t getNodes() const;
    bool nodesIsSet() const;
    void unsetNodes();

    void setNodes(const utility::string_t& value);

    /// <summary>
    /// requested priority change
    /// </summary>
    utility::string_t getNice() const;
    bool niceIsSet() const;
    void unsetNice();

    void setNice(const utility::string_t& value);

    /// <summary>
    /// number of tasks to invoke on each core
    /// </summary>
    utility::string_t getTasksPerCore() const;
    bool tasksPerCoreIsSet() const;
    void unsetTasks_per_core();

    void setTasksPerCore(const utility::string_t& value);

    /// <summary>
    /// number of tasks to invoke on each socket
    /// </summary>
    utility::string_t getTasksPerSocket() const;
    bool tasksPerSocketIsSet() const;
    void unsetTasks_per_socket();

    void setTasksPerSocket(const utility::string_t& value);

    /// <summary>
    /// number of tasks to invoke on each board
    /// </summary>
    utility::string_t getTasksPerBoard() const;
    bool tasksPerBoardIsSet() const;
    void unsetTasks_per_board();

    void setTasksPerBoard(const utility::string_t& value);

    /// <summary>
    /// minimum number of cpus required by job
    /// </summary>
    utility::string_t getCpus() const;
    bool cpusIsSet() const;
    void unsetCpus();

    void setCpus(const utility::string_t& value);

    /// <summary>
    /// minimum number of nodes required by job
    /// </summary>
    utility::string_t getNodeCount() const;
    bool nodeCountIsSet() const;
    void unsetNode_count();

    void setNodeCount(const utility::string_t& value);

    /// <summary>
    /// requested task count
    /// </summary>
    utility::string_t getTasks() const;
    bool tasksIsSet() const;
    void unsetTasks();

    void setTasks(const utility::string_t& value);

    /// <summary>
    /// job ID of hetjob leader
    /// </summary>
    utility::string_t getHetJobId() const;
    bool hetJobIdIsSet() const;
    void unsetHet_job_id();

    void setHetJobId(const utility::string_t& value);

    /// <summary>
    /// job IDs for all components
    /// </summary>
    utility::string_t getHetJobIdSet() const;
    bool hetJobIdSetIsSet() const;
    void unsetHet_job_id_set();

    void setHetJobIdSet(const utility::string_t& value);

    /// <summary>
    /// HetJob component offset from leader
    /// </summary>
    utility::string_t getHetJobOffset() const;
    bool hetJobOffsetIsSet() const;
    void unsetHet_job_offset();

    void setHetJobOffset(const utility::string_t& value);

    /// <summary>
    /// name of assigned partition
    /// </summary>
    utility::string_t getPartition() const;
    bool partitionIsSet() const;
    void unsetPartition();

    void setPartition(const utility::string_t& value);

    /// <summary>
    /// minimum real memory per node
    /// </summary>
    utility::string_t getMemoryPerNode() const;
    bool memoryPerNodeIsSet() const;
    void unsetMemory_per_node();

    void setMemoryPerNode(const utility::string_t& value);

    /// <summary>
    /// minimum real memory per cpu
    /// </summary>
    utility::string_t getMemoryPerCpu() const;
    bool memoryPerCpuIsSet() const;
    void unsetMemory_per_cpu();

    void setMemoryPerCpu(const utility::string_t& value);

    /// <summary>
    /// minimum # CPUs per node
    /// </summary>
    utility::string_t getMinimumCpusPerNode() const;
    bool minimumCpusPerNodeIsSet() const;
    void unsetMinimum_cpus_per_node();

    void setMinimumCpusPerNode(const utility::string_t& value);

    /// <summary>
    /// minimum tmp disk per node
    /// </summary>
    utility::string_t getMinimumTmpDiskPerNode() const;
    bool minimumTmpDiskPerNodeIsSet() const;
    void unsetMinimum_tmp_disk_per_node();

    void setMinimumTmpDiskPerNode(const utility::string_t& value);

    /// <summary>
    /// preemption signal time
    /// </summary>
    int64_t getPreemptTime() const;
    bool preemptTimeIsSet() const;
    void unsetPreempt_time();

    void setPreemptTime(int64_t value);

    /// <summary>
    /// time job ran prior to last suspend
    /// </summary>
    int64_t getPreSusTime() const;
    bool preSusTimeIsSet() const;
    void unsetPre_sus_time();

    void setPreSusTime(int64_t value);

    /// <summary>
    /// relative priority of the job
    /// </summary>
    utility::string_t getPriority() const;
    bool priorityIsSet() const;
    void unsetPriority();

    void setPriority(const utility::string_t& value);

    /// <summary>
    /// Job profiling requested
    /// </summary>
    std::vector<utility::string_t>& getProfile();
    bool profileIsSet() const;
    void unsetProfile();

    void setProfile(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Quality of Service
    /// </summary>
    utility::string_t getQos() const;
    bool qosIsSet() const;
    void unsetQos();

    void setQos(const utility::string_t& value);

    /// <summary>
    /// node reboot requested before start
    /// </summary>
    bool isReboot() const;
    bool rebootIsSet() const;
    void unsetReboot();

    void setReboot(bool value);

    /// <summary>
    /// comma separated list of required nodes
    /// </summary>
    utility::string_t getRequiredNodes() const;
    bool requiredNodesIsSet() const;
    void unsetRequired_nodes();

    void setRequiredNodes(const utility::string_t& value);

    /// <summary>
    /// enable or disable job requeue option
    /// </summary>
    bool isRequeue() const;
    bool requeueIsSet() const;
    void unsetRequeue();

    void setRequeue(bool value);

    /// <summary>
    /// time of latest size change
    /// </summary>
    int64_t getResizeTime() const;
    bool resizeTimeIsSet() const;
    void unsetResize_time();

    void setResizeTime(int64_t value);

    /// <summary>
    /// count of job restarts
    /// </summary>
    utility::string_t getRestartCnt() const;
    bool restartCntIsSet() const;
    void unsetRestart_cnt();

    void setRestartCnt(const utility::string_t& value);

    /// <summary>
    /// reservation name
    /// </summary>
    utility::string_t getResvName() const;
    bool resvNameIsSet() const;
    void unsetResv_name();

    void setResvName(const utility::string_t& value);

    /// <summary>
    /// type and if job can share nodes with other jobs
    /// </summary>
    utility::string_t getShared() const;
    bool sharedIsSet() const;
    void unsetShared();

    void setShared(const utility::string_t& value);

    /// <summary>
    /// details requested
    /// </summary>
    std::vector<utility::string_t>& getShowFlags();
    bool showFlagsIsSet() const;
    void unsetShow_flags();

    void setShowFlags(const std::vector<utility::string_t>& value);

    /// <summary>
    /// sockets per board required by job
    /// </summary>
    utility::string_t getSocketsPerBoard() const;
    bool socketsPerBoardIsSet() const;
    void unsetSockets_per_board();

    void setSocketsPerBoard(const utility::string_t& value);

    /// <summary>
    /// sockets per node required by job
    /// </summary>
    utility::string_t getSocketsPerNode() const;
    bool socketsPerNodeIsSet() const;
    void unsetSockets_per_node();

    void setSocketsPerNode(const utility::string_t& value);

    /// <summary>
    /// time execution begins, actual or expected
    /// </summary>
    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetStart_time();

    void setStartTime(int64_t value);

    /// <summary>
    /// optional details for state_reason
    /// </summary>
    utility::string_t getStateDescription() const;
    bool stateDescriptionIsSet() const;
    void unsetState_description();

    void setStateDescription(const utility::string_t& value);

    /// <summary>
    /// reason job still pending or failed
    /// </summary>
    utility::string_t getStateReason() const;
    bool stateReasonIsSet() const;
    void unsetState_reason();

    void setStateReason(const utility::string_t& value);

    /// <summary>
    /// pathname of job&#39;s stderr file
    /// </summary>
    utility::string_t getStandardError() const;
    bool standardErrorIsSet() const;
    void unsetStandard_error();

    void setStandardError(const utility::string_t& value);

    /// <summary>
    /// pathname of job&#39;s stdin file
    /// </summary>
    utility::string_t getStandardInput() const;
    bool standardInputIsSet() const;
    void unsetStandard_input();

    void setStandardInput(const utility::string_t& value);

    /// <summary>
    /// pathname of job&#39;s stdout file
    /// </summary>
    utility::string_t getStandardOutput() const;
    bool standardOutputIsSet() const;
    void unsetStandard_output();

    void setStandardOutput(const utility::string_t& value);

    /// <summary>
    /// time of job submission
    /// </summary>
    int64_t getSubmitTime() const;
    bool submitTimeIsSet() const;
    void unsetSubmit_time();

    void setSubmitTime(int64_t value);

    /// <summary>
    /// time job last suspended or resumed
    /// </summary>
    int64_t getSuspendTime() const;
    bool suspendTimeIsSet() const;
    void unsetSuspend_time();

    void setSuspendTime(int64_t value);

    /// <summary>
    /// slurmctld&#39;s arbitrary comment
    /// </summary>
    utility::string_t getSystemComment() const;
    bool systemCommentIsSet() const;
    void unsetSystem_comment();

    void setSystemComment(const utility::string_t& value);

    /// <summary>
    /// maximum run time in minutes
    /// </summary>
    utility::string_t getTimeLimit() const;
    bool timeLimitIsSet() const;
    void unsetTime_limit();

    void setTimeLimit(const utility::string_t& value);

    /// <summary>
    /// minimum run time in minutes
    /// </summary>
    utility::string_t getTimeMinimum() const;
    bool timeMinimumIsSet() const;
    void unsetTime_minimum();

    void setTimeMinimum(const utility::string_t& value);

    /// <summary>
    /// threads per core required by job
    /// </summary>
    utility::string_t getThreadsPerCore() const;
    bool threadsPerCoreIsSet() const;
    void unsetThreads_per_core();

    void setThreadsPerCore(const utility::string_t& value);

    /// <summary>
    /// Task to TRES binding directives
    /// </summary>
    utility::string_t getTresBind() const;
    bool tresBindIsSet() const;
    void unsetTres_bind();

    void setTresBind(const utility::string_t& value);

    /// <summary>
    /// TRES frequency directives
    /// </summary>
    utility::string_t getTresFreq() const;
    bool tresFreqIsSet() const;
    void unsetTres_freq();

    void setTresFreq(const utility::string_t& value);

    /// <summary>
    /// semicolon delimited list of TRES&#x3D;# values
    /// </summary>
    utility::string_t getTresPerJob() const;
    bool tresPerJobIsSet() const;
    void unsetTres_per_job();

    void setTresPerJob(const utility::string_t& value);

    /// <summary>
    /// semicolon delimited list of TRES&#x3D;# values
    /// </summary>
    utility::string_t getTresPerNode() const;
    bool tresPerNodeIsSet() const;
    void unsetTres_per_node();

    void setTresPerNode(const utility::string_t& value);

    /// <summary>
    /// semicolon delimited list of TRES&#x3D;# values
    /// </summary>
    utility::string_t getTresPerSocket() const;
    bool tresPerSocketIsSet() const;
    void unsetTres_per_socket();

    void setTresPerSocket(const utility::string_t& value);

    /// <summary>
    /// semicolon delimited list of TRES&#x3D;# values
    /// </summary>
    utility::string_t getTresPerTask() const;
    bool tresPerTaskIsSet() const;
    void unsetTres_per_task();

    void setTresPerTask(const utility::string_t& value);

    /// <summary>
    /// tres reqeusted in the job
    /// </summary>
    utility::string_t getTresReqStr() const;
    bool tresReqStrIsSet() const;
    void unsetTres_req_str();

    void setTresReqStr(const utility::string_t& value);

    /// <summary>
    /// tres used in the job
    /// </summary>
    utility::string_t getTresAllocStr() const;
    bool tresAllocStrIsSet() const;
    void unsetTres_alloc_str();

    void setTresAllocStr(const utility::string_t& value);

    /// <summary>
    /// user id the job runs as
    /// </summary>
    utility::string_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUser_id();

    void setUserId(const utility::string_t& value);

    /// <summary>
    /// user the job runs as
    /// </summary>
    utility::string_t getUserName() const;
    bool userNameIsSet() const;
    void unsetUser_name();

    void setUserName(const utility::string_t& value);

    /// <summary>
    /// wckey for job
    /// </summary>
    utility::string_t getWckey() const;
    bool wckeyIsSet() const;
    void unsetWckey();

    void setWckey(const utility::string_t& value);

    /// <summary>
    /// pathname of working directory
    /// </summary>
    utility::string_t getCurrentWorkingDirectory() const;
    bool currentWorkingDirectoryIsSet() const;
    void unsetCurrent_working_directory();

    void setCurrentWorkingDirectory(const utility::string_t& value);


protected:
    utility::string_t m_Account;
    bool m_AccountIsSet;
    int64_t m_Accrue_time;
    bool m_Accrue_timeIsSet;
    utility::string_t m_Admin_comment;
    bool m_Admin_commentIsSet;
    utility::string_t m_Array_job_id;
    bool m_Array_job_idIsSet;
    utility::string_t m_Array_task_id;
    bool m_Array_task_idIsSet;
    utility::string_t m_Array_max_tasks;
    bool m_Array_max_tasksIsSet;
    utility::string_t m_Array_task_string;
    bool m_Array_task_stringIsSet;
    utility::string_t m_Association_id;
    bool m_Association_idIsSet;
    utility::string_t m_Batch_features;
    bool m_Batch_featuresIsSet;
    bool m_Batch_flag;
    bool m_Batch_flagIsSet;
    utility::string_t m_Batch_host;
    bool m_Batch_hostIsSet;
    std::vector<utility::string_t> m_Flags;
    bool m_FlagsIsSet;
    utility::string_t m_Burst_buffer;
    bool m_Burst_bufferIsSet;
    utility::string_t m_Burst_buffer_state;
    bool m_Burst_buffer_stateIsSet;
    utility::string_t m_Cluster;
    bool m_ClusterIsSet;
    utility::string_t m_Cluster_features;
    bool m_Cluster_featuresIsSet;
    utility::string_t m_Command;
    bool m_CommandIsSet;
    utility::string_t m_Comment;
    bool m_CommentIsSet;
    bool m_Contiguous;
    bool m_ContiguousIsSet;
    utility::string_t m_Core_spec;
    bool m_Core_specIsSet;
    utility::string_t m_Thread_spec;
    bool m_Thread_specIsSet;
    utility::string_t m_Cores_per_socket;
    bool m_Cores_per_socketIsSet;
    utility::string_t m_Billable_tres;
    bool m_Billable_tresIsSet;
    utility::string_t m_Cpus_per_task;
    bool m_Cpus_per_taskIsSet;
    utility::string_t m_Cpu_frequency_minimum;
    bool m_Cpu_frequency_minimumIsSet;
    utility::string_t m_Cpu_frequency_maximum;
    bool m_Cpu_frequency_maximumIsSet;
    utility::string_t m_Cpu_frequency_governor;
    bool m_Cpu_frequency_governorIsSet;
    utility::string_t m_Cpus_per_tres;
    bool m_Cpus_per_tresIsSet;
    utility::string_t m_Deadline;
    bool m_DeadlineIsSet;
    utility::string_t m_Delay_boot;
    bool m_Delay_bootIsSet;
    utility::string_t m_Dependency;
    bool m_DependencyIsSet;
    utility::string_t m_Derived_exit_code;
    bool m_Derived_exit_codeIsSet;
    int64_t m_Eligible_time;
    bool m_Eligible_timeIsSet;
    int64_t m_End_time;
    bool m_End_timeIsSet;
    utility::string_t m_Excluded_nodes;
    bool m_Excluded_nodesIsSet;
    int32_t m_Exit_code;
    bool m_Exit_codeIsSet;
    utility::string_t m_Features;
    bool m_FeaturesIsSet;
    utility::string_t m_Federation_origin;
    bool m_Federation_originIsSet;
    utility::string_t m_Federation_siblings_active;
    bool m_Federation_siblings_activeIsSet;
    utility::string_t m_Federation_siblings_viable;
    bool m_Federation_siblings_viableIsSet;
    std::vector<utility::string_t> m_Gres_detail;
    bool m_Gres_detailIsSet;
    utility::string_t m_Group_id;
    bool m_Group_idIsSet;
    utility::string_t m_Job_id;
    bool m_Job_idIsSet;
    std::shared_ptr<V0_0_37_job_resources> m_Job_resources;
    bool m_Job_resourcesIsSet;
    utility::string_t m_Job_state;
    bool m_Job_stateIsSet;
    utility::string_t m_Last_sched_evaluation;
    bool m_Last_sched_evaluationIsSet;
    utility::string_t m_Licenses;
    bool m_LicensesIsSet;
    utility::string_t m_Max_cpus;
    bool m_Max_cpusIsSet;
    utility::string_t m_Max_nodes;
    bool m_Max_nodesIsSet;
    utility::string_t m_Mcs_label;
    bool m_Mcs_labelIsSet;
    utility::string_t m_Memory_per_tres;
    bool m_Memory_per_tresIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Nodes;
    bool m_NodesIsSet;
    utility::string_t m_Nice;
    bool m_NiceIsSet;
    utility::string_t m_Tasks_per_core;
    bool m_Tasks_per_coreIsSet;
    utility::string_t m_Tasks_per_socket;
    bool m_Tasks_per_socketIsSet;
    utility::string_t m_Tasks_per_board;
    bool m_Tasks_per_boardIsSet;
    utility::string_t m_Cpus;
    bool m_CpusIsSet;
    utility::string_t m_Node_count;
    bool m_Node_countIsSet;
    utility::string_t m_Tasks;
    bool m_TasksIsSet;
    utility::string_t m_Het_job_id;
    bool m_Het_job_idIsSet;
    utility::string_t m_Het_job_id_set;
    bool m_Het_job_id_setIsSet;
    utility::string_t m_Het_job_offset;
    bool m_Het_job_offsetIsSet;
    utility::string_t m_Partition;
    bool m_PartitionIsSet;
    utility::string_t m_Memory_per_node;
    bool m_Memory_per_nodeIsSet;
    utility::string_t m_Memory_per_cpu;
    bool m_Memory_per_cpuIsSet;
    utility::string_t m_Minimum_cpus_per_node;
    bool m_Minimum_cpus_per_nodeIsSet;
    utility::string_t m_Minimum_tmp_disk_per_node;
    bool m_Minimum_tmp_disk_per_nodeIsSet;
    int64_t m_Preempt_time;
    bool m_Preempt_timeIsSet;
    int64_t m_Pre_sus_time;
    bool m_Pre_sus_timeIsSet;
    utility::string_t m_Priority;
    bool m_PriorityIsSet;
    std::vector<utility::string_t> m_Profile;
    bool m_ProfileIsSet;
    utility::string_t m_Qos;
    bool m_QosIsSet;
    bool m_Reboot;
    bool m_RebootIsSet;
    utility::string_t m_Required_nodes;
    bool m_Required_nodesIsSet;
    bool m_Requeue;
    bool m_RequeueIsSet;
    int64_t m_Resize_time;
    bool m_Resize_timeIsSet;
    utility::string_t m_Restart_cnt;
    bool m_Restart_cntIsSet;
    utility::string_t m_Resv_name;
    bool m_Resv_nameIsSet;
    utility::string_t m_Shared;
    bool m_SharedIsSet;
    std::vector<utility::string_t> m_Show_flags;
    bool m_Show_flagsIsSet;
    utility::string_t m_Sockets_per_board;
    bool m_Sockets_per_boardIsSet;
    utility::string_t m_Sockets_per_node;
    bool m_Sockets_per_nodeIsSet;
    int64_t m_Start_time;
    bool m_Start_timeIsSet;
    utility::string_t m_State_description;
    bool m_State_descriptionIsSet;
    utility::string_t m_State_reason;
    bool m_State_reasonIsSet;
    utility::string_t m_Standard_error;
    bool m_Standard_errorIsSet;
    utility::string_t m_Standard_input;
    bool m_Standard_inputIsSet;
    utility::string_t m_Standard_output;
    bool m_Standard_outputIsSet;
    int64_t m_Submit_time;
    bool m_Submit_timeIsSet;
    int64_t m_Suspend_time;
    bool m_Suspend_timeIsSet;
    utility::string_t m_System_comment;
    bool m_System_commentIsSet;
    utility::string_t m_Time_limit;
    bool m_Time_limitIsSet;
    utility::string_t m_Time_minimum;
    bool m_Time_minimumIsSet;
    utility::string_t m_Threads_per_core;
    bool m_Threads_per_coreIsSet;
    utility::string_t m_Tres_bind;
    bool m_Tres_bindIsSet;
    utility::string_t m_Tres_freq;
    bool m_Tres_freqIsSet;
    utility::string_t m_Tres_per_job;
    bool m_Tres_per_jobIsSet;
    utility::string_t m_Tres_per_node;
    bool m_Tres_per_nodeIsSet;
    utility::string_t m_Tres_per_socket;
    bool m_Tres_per_socketIsSet;
    utility::string_t m_Tres_per_task;
    bool m_Tres_per_taskIsSet;
    utility::string_t m_Tres_req_str;
    bool m_Tres_req_strIsSet;
    utility::string_t m_Tres_alloc_str;
    bool m_Tres_alloc_strIsSet;
    utility::string_t m_User_id;
    bool m_User_idIsSet;
    utility::string_t m_User_name;
    bool m_User_nameIsSet;
    utility::string_t m_Wckey;
    bool m_WckeyIsSet;
    utility::string_t m_Current_working_directory;
    bool m_Current_working_directoryIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_37_job_response_properties_H_ */
