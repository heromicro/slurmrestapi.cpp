/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.38
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Dbv0_0_38_job_step_statistics.h
 *
 * Statistics of job step
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_job_step_statistics_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_job_step_statistics_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/Dbv0_0_38_job_step_statistics_CPU.h"
#include "slurmrestapi/model/Dbv0_0_38_job_step_statistics_energy.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Dbv0_0_38_job_step_statistics_CPU;
class Dbv0_0_38_job_step_statistics_energy;

/// <summary>
/// Statistics of job step
/// </summary>
class  Dbv0_0_38_job_step_statistics
    : public ModelBase
{
public:
    Dbv0_0_38_job_step_statistics();
    virtual ~Dbv0_0_38_job_step_statistics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_38_job_step_statistics members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Dbv0_0_38_job_step_statistics_CPU> getCPU() const;
    bool cPUIsSet() const;
    void unsetCPU();

    void setCPU(const std::shared_ptr<Dbv0_0_38_job_step_statistics_CPU>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Dbv0_0_38_job_step_statistics_energy> getEnergy() const;
    bool energyIsSet() const;
    void unsetEnergy();

    void setEnergy(const std::shared_ptr<Dbv0_0_38_job_step_statistics_energy>& value);


protected:
    std::shared_ptr<Dbv0_0_38_job_step_statistics_CPU> m_CPU;
    bool m_CPUIsSet;
    std::shared_ptr<Dbv0_0_38_job_step_statistics_energy> m_Energy;
    bool m_EnergyIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_job_step_statistics_H_ */