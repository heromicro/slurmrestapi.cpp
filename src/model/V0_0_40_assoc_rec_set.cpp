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



#include "slurmrestapi/model/V0_0_40_assoc_rec_set.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_40_assoc_rec_set::V0_0_40_assoc_rec_set()
{
    m_Comment = utility::conversions::to_string_t("");
    m_CommentIsSet = false;
    m_Defaultqos = utility::conversions::to_string_t("");
    m_DefaultqosIsSet = false;
    m_GrpjobsIsSet = false;
    m_GrpjobsaccrueIsSet = false;
    m_GrpsubmitjobsIsSet = false;
    m_GrptresIsSet = false;
    m_GrptresminsIsSet = false;
    m_GrptresrunminsIsSet = false;
    m_GrpwallIsSet = false;
    m_MaxjobsIsSet = false;
    m_MaxjobsaccrueIsSet = false;
    m_MaxsubmitjobsIsSet = false;
    m_MaxtresminsperjobIsSet = false;
    m_MaxtresrunminsIsSet = false;
    m_MaxtresperjobIsSet = false;
    m_MaxtrespernodeIsSet = false;
    m_MaxwalldurationperjobIsSet = false;
    m_MinpriothreshIsSet = false;
    m_Parent = utility::conversions::to_string_t("");
    m_ParentIsSet = false;
    m_PriorityIsSet = false;
    m_QoslevelIsSet = false;
    m_Fairshare = 0;
    m_FairshareIsSet = false;
}

V0_0_40_assoc_rec_set::~V0_0_40_assoc_rec_set()
{
}

void V0_0_40_assoc_rec_set::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_assoc_rec_set::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CommentIsSet)
    {
        val[utility::conversions::to_string_t(U("comment"))] = ModelBase::toJson(m_Comment);
    }
    if(m_DefaultqosIsSet)
    {
        val[utility::conversions::to_string_t(U("defaultqos"))] = ModelBase::toJson(m_Defaultqos);
    }
    if(m_GrpjobsIsSet)
    {
        val[utility::conversions::to_string_t(U("grpjobs"))] = ModelBase::toJson(m_Grpjobs);
    }
    if(m_GrpjobsaccrueIsSet)
    {
        val[utility::conversions::to_string_t(U("grpjobsaccrue"))] = ModelBase::toJson(m_Grpjobsaccrue);
    }
    if(m_GrpsubmitjobsIsSet)
    {
        val[utility::conversions::to_string_t(U("grpsubmitjobs"))] = ModelBase::toJson(m_Grpsubmitjobs);
    }
    if(m_GrptresIsSet)
    {
        val[utility::conversions::to_string_t(U("grptres"))] = ModelBase::toJson(m_Grptres);
    }
    if(m_GrptresminsIsSet)
    {
        val[utility::conversions::to_string_t(U("grptresmins"))] = ModelBase::toJson(m_Grptresmins);
    }
    if(m_GrptresrunminsIsSet)
    {
        val[utility::conversions::to_string_t(U("grptresrunmins"))] = ModelBase::toJson(m_Grptresrunmins);
    }
    if(m_GrpwallIsSet)
    {
        val[utility::conversions::to_string_t(U("grpwall"))] = ModelBase::toJson(m_Grpwall);
    }
    if(m_MaxjobsIsSet)
    {
        val[utility::conversions::to_string_t(U("maxjobs"))] = ModelBase::toJson(m_Maxjobs);
    }
    if(m_MaxjobsaccrueIsSet)
    {
        val[utility::conversions::to_string_t(U("maxjobsaccrue"))] = ModelBase::toJson(m_Maxjobsaccrue);
    }
    if(m_MaxsubmitjobsIsSet)
    {
        val[utility::conversions::to_string_t(U("maxsubmitjobs"))] = ModelBase::toJson(m_Maxsubmitjobs);
    }
    if(m_MaxtresminsperjobIsSet)
    {
        val[utility::conversions::to_string_t(U("maxtresminsperjob"))] = ModelBase::toJson(m_Maxtresminsperjob);
    }
    if(m_MaxtresrunminsIsSet)
    {
        val[utility::conversions::to_string_t(U("maxtresrunmins"))] = ModelBase::toJson(m_Maxtresrunmins);
    }
    if(m_MaxtresperjobIsSet)
    {
        val[utility::conversions::to_string_t(U("maxtresperjob"))] = ModelBase::toJson(m_Maxtresperjob);
    }
    if(m_MaxtrespernodeIsSet)
    {
        val[utility::conversions::to_string_t(U("maxtrespernode"))] = ModelBase::toJson(m_Maxtrespernode);
    }
    if(m_MaxwalldurationperjobIsSet)
    {
        val[utility::conversions::to_string_t(U("maxwalldurationperjob"))] = ModelBase::toJson(m_Maxwalldurationperjob);
    }
    if(m_MinpriothreshIsSet)
    {
        val[utility::conversions::to_string_t(U("minpriothresh"))] = ModelBase::toJson(m_Minpriothresh);
    }
    if(m_ParentIsSet)
    {
        val[utility::conversions::to_string_t(U("parent"))] = ModelBase::toJson(m_Parent);
    }
    if(m_PriorityIsSet)
    {
        val[utility::conversions::to_string_t(U("priority"))] = ModelBase::toJson(m_Priority);
    }
    if(m_QoslevelIsSet)
    {
        val[utility::conversions::to_string_t(U("qoslevel"))] = ModelBase::toJson(m_Qoslevel);
    }
    if(m_FairshareIsSet)
    {
        val[utility::conversions::to_string_t(U("fairshare"))] = ModelBase::toJson(m_Fairshare);
    }

    return val;
}

bool V0_0_40_assoc_rec_set::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("comment"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("comment")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setComment;
            ok &= ModelBase::fromJson(fieldValue, refVal_setComment);
            setComment(refVal_setComment);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("defaultqos"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("defaultqos")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDefaultqos;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDefaultqos);
            setDefaultqos(refVal_setDefaultqos);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("grpjobs"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("grpjobs")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_uint32_no_val> refVal_setGrpjobs;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGrpjobs);
            setGrpjobs(refVal_setGrpjobs);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("grpjobsaccrue"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("grpjobsaccrue")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_uint32_no_val> refVal_setGrpjobsaccrue;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGrpjobsaccrue);
            setGrpjobsaccrue(refVal_setGrpjobsaccrue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("grpsubmitjobs"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("grpsubmitjobs")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_uint32_no_val> refVal_setGrpsubmitjobs;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGrpsubmitjobs);
            setGrpsubmitjobs(refVal_setGrpsubmitjobs);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("grptres"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("grptres")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_40_tres>> refVal_setGrptres;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGrptres);
            setGrptres(refVal_setGrptres);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("grptresmins"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("grptresmins")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_40_tres>> refVal_setGrptresmins;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGrptresmins);
            setGrptresmins(refVal_setGrptresmins);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("grptresrunmins"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("grptresrunmins")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_40_tres>> refVal_setGrptresrunmins;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGrptresrunmins);
            setGrptresrunmins(refVal_setGrptresrunmins);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("grpwall"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("grpwall")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_uint32_no_val> refVal_setGrpwall;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGrpwall);
            setGrpwall(refVal_setGrpwall);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("maxjobs"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("maxjobs")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_uint32_no_val> refVal_setMaxjobs;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaxjobs);
            setMaxjobs(refVal_setMaxjobs);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("maxjobsaccrue"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("maxjobsaccrue")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_uint32_no_val> refVal_setMaxjobsaccrue;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaxjobsaccrue);
            setMaxjobsaccrue(refVal_setMaxjobsaccrue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("maxsubmitjobs"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("maxsubmitjobs")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_uint32_no_val> refVal_setMaxsubmitjobs;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaxsubmitjobs);
            setMaxsubmitjobs(refVal_setMaxsubmitjobs);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("maxtresminsperjob"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("maxtresminsperjob")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_40_tres>> refVal_setMaxtresminsperjob;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaxtresminsperjob);
            setMaxtresminsperjob(refVal_setMaxtresminsperjob);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("maxtresrunmins"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("maxtresrunmins")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_40_tres>> refVal_setMaxtresrunmins;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaxtresrunmins);
            setMaxtresrunmins(refVal_setMaxtresrunmins);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("maxtresperjob"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("maxtresperjob")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_40_tres>> refVal_setMaxtresperjob;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaxtresperjob);
            setMaxtresperjob(refVal_setMaxtresperjob);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("maxtrespernode"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("maxtrespernode")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_40_tres>> refVal_setMaxtrespernode;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaxtrespernode);
            setMaxtrespernode(refVal_setMaxtrespernode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("maxwalldurationperjob"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("maxwalldurationperjob")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_uint32_no_val> refVal_setMaxwalldurationperjob;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaxwalldurationperjob);
            setMaxwalldurationperjob(refVal_setMaxwalldurationperjob);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("minpriothresh"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("minpriothresh")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_uint32_no_val> refVal_setMinpriothresh;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMinpriothresh);
            setMinpriothresh(refVal_setMinpriothresh);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("parent"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("parent")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setParent;
            ok &= ModelBase::fromJson(fieldValue, refVal_setParent);
            setParent(refVal_setParent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("priority"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("priority")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_uint32_no_val> refVal_setPriority;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPriority);
            setPriority(refVal_setPriority);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("qoslevel"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("qoslevel")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setQoslevel;
            ok &= ModelBase::fromJson(fieldValue, refVal_setQoslevel);
            setQoslevel(refVal_setQoslevel);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("fairshare"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("fairshare")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setFairshare;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFairshare);
            setFairshare(refVal_setFairshare);
        }
    }
    return ok;
}

void V0_0_40_assoc_rec_set::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_CommentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("comment")), m_Comment));
    }
    if(m_DefaultqosIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("defaultqos")), m_Defaultqos));
    }
    if(m_GrpjobsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("grpjobs")), m_Grpjobs));
    }
    if(m_GrpjobsaccrueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("grpjobsaccrue")), m_Grpjobsaccrue));
    }
    if(m_GrpsubmitjobsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("grpsubmitjobs")), m_Grpsubmitjobs));
    }
    if(m_GrptresIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("grptres")), m_Grptres));
    }
    if(m_GrptresminsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("grptresmins")), m_Grptresmins));
    }
    if(m_GrptresrunminsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("grptresrunmins")), m_Grptresrunmins));
    }
    if(m_GrpwallIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("grpwall")), m_Grpwall));
    }
    if(m_MaxjobsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("maxjobs")), m_Maxjobs));
    }
    if(m_MaxjobsaccrueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("maxjobsaccrue")), m_Maxjobsaccrue));
    }
    if(m_MaxsubmitjobsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("maxsubmitjobs")), m_Maxsubmitjobs));
    }
    if(m_MaxtresminsperjobIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("maxtresminsperjob")), m_Maxtresminsperjob));
    }
    if(m_MaxtresrunminsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("maxtresrunmins")), m_Maxtresrunmins));
    }
    if(m_MaxtresperjobIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("maxtresperjob")), m_Maxtresperjob));
    }
    if(m_MaxtrespernodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("maxtrespernode")), m_Maxtrespernode));
    }
    if(m_MaxwalldurationperjobIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("maxwalldurationperjob")), m_Maxwalldurationperjob));
    }
    if(m_MinpriothreshIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("minpriothresh")), m_Minpriothresh));
    }
    if(m_ParentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("parent")), m_Parent));
    }
    if(m_PriorityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("priority")), m_Priority));
    }
    if(m_QoslevelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("qoslevel")), m_Qoslevel));
    }
    if(m_FairshareIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("fairshare")), m_Fairshare));
    }
}

bool V0_0_40_assoc_rec_set::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("comment"))))
    {
        utility::string_t refVal_setComment;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("comment"))), refVal_setComment );
        setComment(refVal_setComment);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("defaultqos"))))
    {
        utility::string_t refVal_setDefaultqos;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("defaultqos"))), refVal_setDefaultqos );
        setDefaultqos(refVal_setDefaultqos);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("grpjobs"))))
    {
        std::shared_ptr<V0_0_40_uint32_no_val> refVal_setGrpjobs;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("grpjobs"))), refVal_setGrpjobs );
        setGrpjobs(refVal_setGrpjobs);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("grpjobsaccrue"))))
    {
        std::shared_ptr<V0_0_40_uint32_no_val> refVal_setGrpjobsaccrue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("grpjobsaccrue"))), refVal_setGrpjobsaccrue );
        setGrpjobsaccrue(refVal_setGrpjobsaccrue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("grpsubmitjobs"))))
    {
        std::shared_ptr<V0_0_40_uint32_no_val> refVal_setGrpsubmitjobs;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("grpsubmitjobs"))), refVal_setGrpsubmitjobs );
        setGrpsubmitjobs(refVal_setGrpsubmitjobs);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("grptres"))))
    {
        std::vector<std::shared_ptr<V0_0_40_tres>> refVal_setGrptres;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("grptres"))), refVal_setGrptres );
        setGrptres(refVal_setGrptres);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("grptresmins"))))
    {
        std::vector<std::shared_ptr<V0_0_40_tres>> refVal_setGrptresmins;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("grptresmins"))), refVal_setGrptresmins );
        setGrptresmins(refVal_setGrptresmins);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("grptresrunmins"))))
    {
        std::vector<std::shared_ptr<V0_0_40_tres>> refVal_setGrptresrunmins;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("grptresrunmins"))), refVal_setGrptresrunmins );
        setGrptresrunmins(refVal_setGrptresrunmins);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("grpwall"))))
    {
        std::shared_ptr<V0_0_40_uint32_no_val> refVal_setGrpwall;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("grpwall"))), refVal_setGrpwall );
        setGrpwall(refVal_setGrpwall);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("maxjobs"))))
    {
        std::shared_ptr<V0_0_40_uint32_no_val> refVal_setMaxjobs;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("maxjobs"))), refVal_setMaxjobs );
        setMaxjobs(refVal_setMaxjobs);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("maxjobsaccrue"))))
    {
        std::shared_ptr<V0_0_40_uint32_no_val> refVal_setMaxjobsaccrue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("maxjobsaccrue"))), refVal_setMaxjobsaccrue );
        setMaxjobsaccrue(refVal_setMaxjobsaccrue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("maxsubmitjobs"))))
    {
        std::shared_ptr<V0_0_40_uint32_no_val> refVal_setMaxsubmitjobs;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("maxsubmitjobs"))), refVal_setMaxsubmitjobs );
        setMaxsubmitjobs(refVal_setMaxsubmitjobs);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("maxtresminsperjob"))))
    {
        std::vector<std::shared_ptr<V0_0_40_tres>> refVal_setMaxtresminsperjob;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("maxtresminsperjob"))), refVal_setMaxtresminsperjob );
        setMaxtresminsperjob(refVal_setMaxtresminsperjob);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("maxtresrunmins"))))
    {
        std::vector<std::shared_ptr<V0_0_40_tres>> refVal_setMaxtresrunmins;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("maxtresrunmins"))), refVal_setMaxtresrunmins );
        setMaxtresrunmins(refVal_setMaxtresrunmins);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("maxtresperjob"))))
    {
        std::vector<std::shared_ptr<V0_0_40_tres>> refVal_setMaxtresperjob;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("maxtresperjob"))), refVal_setMaxtresperjob );
        setMaxtresperjob(refVal_setMaxtresperjob);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("maxtrespernode"))))
    {
        std::vector<std::shared_ptr<V0_0_40_tres>> refVal_setMaxtrespernode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("maxtrespernode"))), refVal_setMaxtrespernode );
        setMaxtrespernode(refVal_setMaxtrespernode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("maxwalldurationperjob"))))
    {
        std::shared_ptr<V0_0_40_uint32_no_val> refVal_setMaxwalldurationperjob;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("maxwalldurationperjob"))), refVal_setMaxwalldurationperjob );
        setMaxwalldurationperjob(refVal_setMaxwalldurationperjob);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("minpriothresh"))))
    {
        std::shared_ptr<V0_0_40_uint32_no_val> refVal_setMinpriothresh;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("minpriothresh"))), refVal_setMinpriothresh );
        setMinpriothresh(refVal_setMinpriothresh);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("parent"))))
    {
        utility::string_t refVal_setParent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("parent"))), refVal_setParent );
        setParent(refVal_setParent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("priority"))))
    {
        std::shared_ptr<V0_0_40_uint32_no_val> refVal_setPriority;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("priority"))), refVal_setPriority );
        setPriority(refVal_setPriority);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("qoslevel"))))
    {
        std::vector<utility::string_t> refVal_setQoslevel;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("qoslevel"))), refVal_setQoslevel );
        setQoslevel(refVal_setQoslevel);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("fairshare"))))
    {
        int32_t refVal_setFairshare;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("fairshare"))), refVal_setFairshare );
        setFairshare(refVal_setFairshare);
    }
    return ok;
}

utility::string_t V0_0_40_assoc_rec_set::getComment() const
{
    return m_Comment;
}

void V0_0_40_assoc_rec_set::setComment(const utility::string_t& value)
{
    m_Comment = value;
    m_CommentIsSet = true;
}

bool V0_0_40_assoc_rec_set::commentIsSet() const
{
    return m_CommentIsSet;
}

void V0_0_40_assoc_rec_set::unsetComment()
{
    m_CommentIsSet = false;
}
utility::string_t V0_0_40_assoc_rec_set::getDefaultqos() const
{
    return m_Defaultqos;
}

void V0_0_40_assoc_rec_set::setDefaultqos(const utility::string_t& value)
{
    m_Defaultqos = value;
    m_DefaultqosIsSet = true;
}

bool V0_0_40_assoc_rec_set::defaultqosIsSet() const
{
    return m_DefaultqosIsSet;
}

void V0_0_40_assoc_rec_set::unsetDefaultqos()
{
    m_DefaultqosIsSet = false;
}
std::shared_ptr<V0_0_40_uint32_no_val> V0_0_40_assoc_rec_set::getGrpjobs() const
{
    return m_Grpjobs;
}

void V0_0_40_assoc_rec_set::setGrpjobs(const std::shared_ptr<V0_0_40_uint32_no_val>& value)
{
    m_Grpjobs = value;
    m_GrpjobsIsSet = true;
}

bool V0_0_40_assoc_rec_set::grpjobsIsSet() const
{
    return m_GrpjobsIsSet;
}

void V0_0_40_assoc_rec_set::unsetGrpjobs()
{
    m_GrpjobsIsSet = false;
}
std::shared_ptr<V0_0_40_uint32_no_val> V0_0_40_assoc_rec_set::getGrpjobsaccrue() const
{
    return m_Grpjobsaccrue;
}

void V0_0_40_assoc_rec_set::setGrpjobsaccrue(const std::shared_ptr<V0_0_40_uint32_no_val>& value)
{
    m_Grpjobsaccrue = value;
    m_GrpjobsaccrueIsSet = true;
}

bool V0_0_40_assoc_rec_set::grpjobsaccrueIsSet() const
{
    return m_GrpjobsaccrueIsSet;
}

void V0_0_40_assoc_rec_set::unsetGrpjobsaccrue()
{
    m_GrpjobsaccrueIsSet = false;
}
std::shared_ptr<V0_0_40_uint32_no_val> V0_0_40_assoc_rec_set::getGrpsubmitjobs() const
{
    return m_Grpsubmitjobs;
}

void V0_0_40_assoc_rec_set::setGrpsubmitjobs(const std::shared_ptr<V0_0_40_uint32_no_val>& value)
{
    m_Grpsubmitjobs = value;
    m_GrpsubmitjobsIsSet = true;
}

bool V0_0_40_assoc_rec_set::grpsubmitjobsIsSet() const
{
    return m_GrpsubmitjobsIsSet;
}

void V0_0_40_assoc_rec_set::unsetGrpsubmitjobs()
{
    m_GrpsubmitjobsIsSet = false;
}
std::vector<std::shared_ptr<V0_0_40_tres>>& V0_0_40_assoc_rec_set::getGrptres()
{
    return m_Grptres;
}

void V0_0_40_assoc_rec_set::setGrptres(const std::vector<std::shared_ptr<V0_0_40_tres>>& value)
{
    m_Grptres = value;
    m_GrptresIsSet = true;
}

bool V0_0_40_assoc_rec_set::grptresIsSet() const
{
    return m_GrptresIsSet;
}

void V0_0_40_assoc_rec_set::unsetGrptres()
{
    m_GrptresIsSet = false;
}
std::vector<std::shared_ptr<V0_0_40_tres>>& V0_0_40_assoc_rec_set::getGrptresmins()
{
    return m_Grptresmins;
}

void V0_0_40_assoc_rec_set::setGrptresmins(const std::vector<std::shared_ptr<V0_0_40_tres>>& value)
{
    m_Grptresmins = value;
    m_GrptresminsIsSet = true;
}

bool V0_0_40_assoc_rec_set::grptresminsIsSet() const
{
    return m_GrptresminsIsSet;
}

void V0_0_40_assoc_rec_set::unsetGrptresmins()
{
    m_GrptresminsIsSet = false;
}
std::vector<std::shared_ptr<V0_0_40_tres>>& V0_0_40_assoc_rec_set::getGrptresrunmins()
{
    return m_Grptresrunmins;
}

void V0_0_40_assoc_rec_set::setGrptresrunmins(const std::vector<std::shared_ptr<V0_0_40_tres>>& value)
{
    m_Grptresrunmins = value;
    m_GrptresrunminsIsSet = true;
}

bool V0_0_40_assoc_rec_set::grptresrunminsIsSet() const
{
    return m_GrptresrunminsIsSet;
}

void V0_0_40_assoc_rec_set::unsetGrptresrunmins()
{
    m_GrptresrunminsIsSet = false;
}
std::shared_ptr<V0_0_40_uint32_no_val> V0_0_40_assoc_rec_set::getGrpwall() const
{
    return m_Grpwall;
}

void V0_0_40_assoc_rec_set::setGrpwall(const std::shared_ptr<V0_0_40_uint32_no_val>& value)
{
    m_Grpwall = value;
    m_GrpwallIsSet = true;
}

bool V0_0_40_assoc_rec_set::grpwallIsSet() const
{
    return m_GrpwallIsSet;
}

void V0_0_40_assoc_rec_set::unsetGrpwall()
{
    m_GrpwallIsSet = false;
}
std::shared_ptr<V0_0_40_uint32_no_val> V0_0_40_assoc_rec_set::getMaxjobs() const
{
    return m_Maxjobs;
}

void V0_0_40_assoc_rec_set::setMaxjobs(const std::shared_ptr<V0_0_40_uint32_no_val>& value)
{
    m_Maxjobs = value;
    m_MaxjobsIsSet = true;
}

bool V0_0_40_assoc_rec_set::maxjobsIsSet() const
{
    return m_MaxjobsIsSet;
}

void V0_0_40_assoc_rec_set::unsetMaxjobs()
{
    m_MaxjobsIsSet = false;
}
std::shared_ptr<V0_0_40_uint32_no_val> V0_0_40_assoc_rec_set::getMaxjobsaccrue() const
{
    return m_Maxjobsaccrue;
}

void V0_0_40_assoc_rec_set::setMaxjobsaccrue(const std::shared_ptr<V0_0_40_uint32_no_val>& value)
{
    m_Maxjobsaccrue = value;
    m_MaxjobsaccrueIsSet = true;
}

bool V0_0_40_assoc_rec_set::maxjobsaccrueIsSet() const
{
    return m_MaxjobsaccrueIsSet;
}

void V0_0_40_assoc_rec_set::unsetMaxjobsaccrue()
{
    m_MaxjobsaccrueIsSet = false;
}
std::shared_ptr<V0_0_40_uint32_no_val> V0_0_40_assoc_rec_set::getMaxsubmitjobs() const
{
    return m_Maxsubmitjobs;
}

void V0_0_40_assoc_rec_set::setMaxsubmitjobs(const std::shared_ptr<V0_0_40_uint32_no_val>& value)
{
    m_Maxsubmitjobs = value;
    m_MaxsubmitjobsIsSet = true;
}

bool V0_0_40_assoc_rec_set::maxsubmitjobsIsSet() const
{
    return m_MaxsubmitjobsIsSet;
}

void V0_0_40_assoc_rec_set::unsetMaxsubmitjobs()
{
    m_MaxsubmitjobsIsSet = false;
}
std::vector<std::shared_ptr<V0_0_40_tres>>& V0_0_40_assoc_rec_set::getMaxtresminsperjob()
{
    return m_Maxtresminsperjob;
}

void V0_0_40_assoc_rec_set::setMaxtresminsperjob(const std::vector<std::shared_ptr<V0_0_40_tres>>& value)
{
    m_Maxtresminsperjob = value;
    m_MaxtresminsperjobIsSet = true;
}

bool V0_0_40_assoc_rec_set::maxtresminsperjobIsSet() const
{
    return m_MaxtresminsperjobIsSet;
}

void V0_0_40_assoc_rec_set::unsetMaxtresminsperjob()
{
    m_MaxtresminsperjobIsSet = false;
}
std::vector<std::shared_ptr<V0_0_40_tres>>& V0_0_40_assoc_rec_set::getMaxtresrunmins()
{
    return m_Maxtresrunmins;
}

void V0_0_40_assoc_rec_set::setMaxtresrunmins(const std::vector<std::shared_ptr<V0_0_40_tres>>& value)
{
    m_Maxtresrunmins = value;
    m_MaxtresrunminsIsSet = true;
}

bool V0_0_40_assoc_rec_set::maxtresrunminsIsSet() const
{
    return m_MaxtresrunminsIsSet;
}

void V0_0_40_assoc_rec_set::unsetMaxtresrunmins()
{
    m_MaxtresrunminsIsSet = false;
}
std::vector<std::shared_ptr<V0_0_40_tres>>& V0_0_40_assoc_rec_set::getMaxtresperjob()
{
    return m_Maxtresperjob;
}

void V0_0_40_assoc_rec_set::setMaxtresperjob(const std::vector<std::shared_ptr<V0_0_40_tres>>& value)
{
    m_Maxtresperjob = value;
    m_MaxtresperjobIsSet = true;
}

bool V0_0_40_assoc_rec_set::maxtresperjobIsSet() const
{
    return m_MaxtresperjobIsSet;
}

void V0_0_40_assoc_rec_set::unsetMaxtresperjob()
{
    m_MaxtresperjobIsSet = false;
}
std::vector<std::shared_ptr<V0_0_40_tres>>& V0_0_40_assoc_rec_set::getMaxtrespernode()
{
    return m_Maxtrespernode;
}

void V0_0_40_assoc_rec_set::setMaxtrespernode(const std::vector<std::shared_ptr<V0_0_40_tres>>& value)
{
    m_Maxtrespernode = value;
    m_MaxtrespernodeIsSet = true;
}

bool V0_0_40_assoc_rec_set::maxtrespernodeIsSet() const
{
    return m_MaxtrespernodeIsSet;
}

void V0_0_40_assoc_rec_set::unsetMaxtrespernode()
{
    m_MaxtrespernodeIsSet = false;
}
std::shared_ptr<V0_0_40_uint32_no_val> V0_0_40_assoc_rec_set::getMaxwalldurationperjob() const
{
    return m_Maxwalldurationperjob;
}

void V0_0_40_assoc_rec_set::setMaxwalldurationperjob(const std::shared_ptr<V0_0_40_uint32_no_val>& value)
{
    m_Maxwalldurationperjob = value;
    m_MaxwalldurationperjobIsSet = true;
}

bool V0_0_40_assoc_rec_set::maxwalldurationperjobIsSet() const
{
    return m_MaxwalldurationperjobIsSet;
}

void V0_0_40_assoc_rec_set::unsetMaxwalldurationperjob()
{
    m_MaxwalldurationperjobIsSet = false;
}
std::shared_ptr<V0_0_40_uint32_no_val> V0_0_40_assoc_rec_set::getMinpriothresh() const
{
    return m_Minpriothresh;
}

void V0_0_40_assoc_rec_set::setMinpriothresh(const std::shared_ptr<V0_0_40_uint32_no_val>& value)
{
    m_Minpriothresh = value;
    m_MinpriothreshIsSet = true;
}

bool V0_0_40_assoc_rec_set::minpriothreshIsSet() const
{
    return m_MinpriothreshIsSet;
}

void V0_0_40_assoc_rec_set::unsetMinpriothresh()
{
    m_MinpriothreshIsSet = false;
}
utility::string_t V0_0_40_assoc_rec_set::getParent() const
{
    return m_Parent;
}

void V0_0_40_assoc_rec_set::setParent(const utility::string_t& value)
{
    m_Parent = value;
    m_ParentIsSet = true;
}

bool V0_0_40_assoc_rec_set::parentIsSet() const
{
    return m_ParentIsSet;
}

void V0_0_40_assoc_rec_set::unsetParent()
{
    m_ParentIsSet = false;
}
std::shared_ptr<V0_0_40_uint32_no_val> V0_0_40_assoc_rec_set::getPriority() const
{
    return m_Priority;
}

void V0_0_40_assoc_rec_set::setPriority(const std::shared_ptr<V0_0_40_uint32_no_val>& value)
{
    m_Priority = value;
    m_PriorityIsSet = true;
}

bool V0_0_40_assoc_rec_set::priorityIsSet() const
{
    return m_PriorityIsSet;
}

void V0_0_40_assoc_rec_set::unsetPriority()
{
    m_PriorityIsSet = false;
}
std::vector<utility::string_t>& V0_0_40_assoc_rec_set::getQoslevel()
{
    return m_Qoslevel;
}

void V0_0_40_assoc_rec_set::setQoslevel(const std::vector<utility::string_t>& value)
{
    m_Qoslevel = value;
    m_QoslevelIsSet = true;
}

bool V0_0_40_assoc_rec_set::qoslevelIsSet() const
{
    return m_QoslevelIsSet;
}

void V0_0_40_assoc_rec_set::unsetQoslevel()
{
    m_QoslevelIsSet = false;
}
int32_t V0_0_40_assoc_rec_set::getFairshare() const
{
    return m_Fairshare;
}

void V0_0_40_assoc_rec_set::setFairshare(int32_t value)
{
    m_Fairshare = value;
    m_FairshareIsSet = true;
}

bool V0_0_40_assoc_rec_set::fairshareIsSet() const
{
    return m_FairshareIsSet;
}

void V0_0_40_assoc_rec_set::unsetFairshare()
{
    m_FairshareIsSet = false;
}
}
}
}
}

