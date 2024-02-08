/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1Protocol"
 * 	found in "../../asn1/../ttcn/AtsPki/lib/asn1/ieee_1609.2.1/Ieee1609Dot2Dot1Protocol.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */

#include "ScmsPdu-EeEcaCertRequest.h"

int
ScmsPdu_EeEcaCertRequest_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using ScmsPdu_Scoped_200P1,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_ScmsPdu_EeEcaCertRequest_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_ScmsPdu_EeEcaCertRequest_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const ber_tlv_tag_t asn_DEF_ScmsPdu_EeEcaCertRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ScmsPdu_EeEcaCertRequest = {
	"ScmsPdu-EeEcaCertRequest",
	"ScmsPdu-EeEcaCertRequest",
	&asn_OP_SEQUENCE,
	asn_DEF_ScmsPdu_EeEcaCertRequest_tags_1,
	sizeof(asn_DEF_ScmsPdu_EeEcaCertRequest_tags_1)
		/sizeof(asn_DEF_ScmsPdu_EeEcaCertRequest_tags_1[0]), /* 1 */
	asn_DEF_ScmsPdu_EeEcaCertRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_ScmsPdu_EeEcaCertRequest_tags_1)
		/sizeof(asn_DEF_ScmsPdu_EeEcaCertRequest_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_ScmsPdu_EeEcaCertRequest_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ScmsPdu_EeEcaCertRequest_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		ScmsPdu_EeEcaCertRequest_constraint
	},
	asn_MBR_ScmsPdu_1,
	2,	/* Elements count */
	&asn_SPC_ScmsPdu_specs_1	/* Additional specs */
};

