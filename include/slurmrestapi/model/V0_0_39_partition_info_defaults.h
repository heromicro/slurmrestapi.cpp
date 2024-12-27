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
 * V0_0_39_partition_info_defaults.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_39_partition_info_defaults_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_39_partition_info_defaults_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_39_uint32_no_val.h"
#include <cpprest/details/basic_types.h>

namespace hm {
namespace slurm {
namespace client {
namespace model {

class V0_0_39_uint32_no_val;


/// <summary>
/// 
/// </summary>
class  V0_0_39_partition_info_defaults
    : public ModelBase
{
public:
    V0_0_39_partition_info_defaults();
    virtual ~V0_0_39_partition_info_defaults();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_partition_info_defaults members

    /// <summary>
    /// 
    /// </summary>
    int64_t getMemoryPerCpu() const;
    bool memoryPerCpuIsSet() const;
    void unsetMemory_per_cpu();

    void setMemoryPerCpu(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_uint32_no_val> getTime() const;
    bool timeIsSet() const;
    void unsetTime();

    void setTime(const std::shared_ptr<V0_0_39_uint32_no_val>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getJob() const;
    bool jobIsSet() const;
    void unsetJob();

    void setJob(const utility::string_t& value);


protected:
    int64_t m_Memory_per_cpu;
    bool m_Memory_per_cpuIsSet;
    std::shared_ptr<V0_0_39_uint32_no_val> m_Time;
    bool m_TimeIsSet;
    utility::string_t m_Job;
    bool m_JobIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_39_partition_info_defaults_H_ */
