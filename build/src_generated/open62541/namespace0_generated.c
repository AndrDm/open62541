/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "namespace0_generated.h"


/* HasDataSetReader - ns=0;i=15297 */

static UA_StatusCode function_namespace0_generated_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "IsReaderInGroup");
attr.displayName = UA_LOCALIZEDTEXT("", "HasDataSetReader");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,UA_NODEID_NUMERIC(ns[0], 15297LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "HasDataSetReader"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15297LU));
}

/* HasDataSetWriter - ns=0;i=15296 */

static UA_StatusCode function_namespace0_generated_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "IsWriterInGroup");
attr.displayName = UA_LOCALIZEDTEXT("", "HasDataSetWriter");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,UA_NODEID_NUMERIC(ns[0], 15296LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "HasDataSetWriter"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15296LU));
}

/* HasPubSubConnection - ns=0;i=14476 */

static UA_StatusCode function_namespace0_generated_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "PubSubConnectionOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasPubSubConnection");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,UA_NODEID_NUMERIC(ns[0], 14476LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "HasPubSubConnection"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14476LU));
}

/* DataSetToWriter - ns=0;i=14936 */

static UA_StatusCode function_namespace0_generated_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "WriterToDataSet");
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetToWriter");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,UA_NODEID_NUMERIC(ns[0], 14936LU),UA_NODEID_NUMERIC(ns[0], 33LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "DataSetToWriter"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14936LU));
}

/* HasAddIn - ns=0;i=17604 */

static UA_StatusCode function_namespace0_generated_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "AddInOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasAddIn");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,UA_NODEID_NUMERIC(ns[0], 17604LU),UA_NODEID_NUMERIC(ns[0], 32LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "HasAddIn"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17604LU));
}

/* HasHistoricalConfiguration - ns=0;i=56 */

static UA_StatusCode function_namespace0_generated_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "HistoricalConfigurationOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasHistoricalConfiguration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,UA_NODEID_NUMERIC(ns[0], 56LU),UA_NODEID_NUMERIC(ns[0], 44LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "HasHistoricalConfiguration"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 56LU));
}

/* HasEffect - ns=0;i=54 */

static UA_StatusCode function_namespace0_generated_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "MayBeEffectedBy");
attr.displayName = UA_LOCALIZEDTEXT("", "HasEffect");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,UA_NODEID_NUMERIC(ns[0], 54LU),UA_NODEID_NUMERIC(ns[0], 32LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "HasEffect"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 54LU));
}

/* HasCause - ns=0;i=53 */

static UA_StatusCode function_namespace0_generated_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "MayBeCausedBy");
attr.displayName = UA_LOCALIZEDTEXT("", "HasCause");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,UA_NODEID_NUMERIC(ns[0], 53LU),UA_NODEID_NUMERIC(ns[0], 32LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "HasCause"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 53LU));
}

/* ToState - ns=0;i=52 */

static UA_StatusCode function_namespace0_generated_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "FromTransition");
attr.displayName = UA_LOCALIZEDTEXT("", "ToState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,UA_NODEID_NUMERIC(ns[0], 52LU),UA_NODEID_NUMERIC(ns[0], 32LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "ToState"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 52LU));
}

/* FromState - ns=0;i=51 */

static UA_StatusCode function_namespace0_generated_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "ToTransition");
attr.displayName = UA_LOCALIZEDTEXT("", "FromState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,UA_NODEID_NUMERIC(ns[0], 51LU),UA_NODEID_NUMERIC(ns[0], 32LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "FromState"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 51LU));
}

/* DiagnosticInfo - ns=0;i=25 */

static UA_StatusCode function_namespace0_generated_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DiagnosticInfo");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 25LU),UA_NODEID_NUMERIC(ns[0], 24LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "DiagnosticInfo"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 25LU));
}

/* DataValue - ns=0;i=23 */

static UA_StatusCode function_namespace0_generated_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataValue");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 23LU),UA_NODEID_NUMERIC(ns[0], 24LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "DataValue"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23LU));
}

/* Structure - ns=0;i=22 */

static UA_StatusCode function_namespace0_generated_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Structure");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 24LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "Structure"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 22LU));
}

/* TimeZoneDataType - ns=0;i=8912 */

static UA_StatusCode function_namespace0_generated_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TimeZoneDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 8912LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "TimeZoneDataType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 8912LU));
}

/* EUInformation - ns=0;i=887 */

static UA_StatusCode function_namespace0_generated_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "EUInformation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 887LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "EUInformation"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 887LU));
}

/* Range - ns=0;i=884 */

static UA_StatusCode function_namespace0_generated_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Range");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 884LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "Range"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 884LU));
}

/* SubscriptionDiagnosticsDataType - ns=0;i=874 */

static UA_StatusCode function_namespace0_generated_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SubscriptionDiagnosticsDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 874LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "SubscriptionDiagnosticsDataType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 874LU));
}

/* ServiceCounterDataType - ns=0;i=871 */

static UA_StatusCode function_namespace0_generated_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServiceCounterDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 871LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "ServiceCounterDataType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 871LU));
}

/* SessionSecurityDiagnosticsDataType - ns=0;i=868 */

static UA_StatusCode function_namespace0_generated_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SessionSecurityDiagnosticsDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 868LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "SessionSecurityDiagnosticsDataType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 868LU));
}

/* SessionDiagnosticsDataType - ns=0;i=865 */

static UA_StatusCode function_namespace0_generated_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SessionDiagnosticsDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 865LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "SessionDiagnosticsDataType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 865LU));
}

/* ServerStatusDataType - ns=0;i=862 */

static UA_StatusCode function_namespace0_generated_20_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerStatusDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 862LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "ServerStatusDataType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 862LU));
}

/* ServerDiagnosticsSummaryDataType - ns=0;i=859 */

static UA_StatusCode function_namespace0_generated_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsSummaryDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 859LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsSummaryDataType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 859LU));
}

/* SamplingIntervalDiagnosticsDataType - ns=0;i=856 */

static UA_StatusCode function_namespace0_generated_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SamplingIntervalDiagnosticsDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 856LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "SamplingIntervalDiagnosticsDataType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 856LU));
}

/* EnumValueType - ns=0;i=7594 */

static UA_StatusCode function_namespace0_generated_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "EnumValueType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 7594LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "EnumValueType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 7594LU));
}

/* SignedSoftwareCertificate - ns=0;i=344 */

static UA_StatusCode function_namespace0_generated_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SignedSoftwareCertificate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 344LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "SignedSoftwareCertificate"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 344LU));
}

/* BuildInfo - ns=0;i=338 */

static UA_StatusCode function_namespace0_generated_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "BuildInfo");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 338LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "BuildInfo"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 338LU));
}

/* ApplicationDescription - ns=0;i=308 */

static UA_StatusCode function_namespace0_generated_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ApplicationDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 308LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "ApplicationDescription"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 308LU));
}

/* Argument - ns=0;i=296 */

static UA_StatusCode function_namespace0_generated_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Argument");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 296LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "Argument"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 296LU));
}

/* AdditionalParametersType - ns=0;i=16313 */

static UA_StatusCode function_namespace0_generated_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AdditionalParametersType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 16313LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "AdditionalParametersType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 16313LU));
}

/* PubSubConnectionDataType - ns=0;i=15617 */

static UA_StatusCode function_namespace0_generated_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PubSubConnectionDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 15617LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "PubSubConnectionDataType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15617LU));
}

/* PublishedDataSetSourceDataType - ns=0;i=15580 */

static UA_StatusCode function_namespace0_generated_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "PublishedDataSetSourceDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 15580LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "PublishedDataSetSourceDataType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15580LU));
}

/* PublishedDataItemsDataType - ns=0;i=15581 */

static UA_StatusCode function_namespace0_generated_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PublishedDataItemsDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 15581LU),UA_NODEID_NUMERIC(ns[0], 15580LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "PublishedDataItemsDataType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15581LU));
}

/* PublishedDataSetDataType - ns=0;i=15578 */

static UA_StatusCode function_namespace0_generated_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PublishedDataSetDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 15578LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "PublishedDataSetDataType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15578LU));
}

/* DataTypeSchemaHeader - ns=0;i=15534 */

static UA_StatusCode function_namespace0_generated_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeSchemaHeader");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 15534LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "DataTypeSchemaHeader"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15534LU));
}

/* DataSetMetaDataType - ns=0;i=14523 */

static UA_StatusCode function_namespace0_generated_34_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetMetaDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 14523LU),UA_NODEID_NUMERIC(ns[0], 15534LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "DataSetMetaDataType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14523LU));
}

/* ConfigurationVersionDataType - ns=0;i=14593 */

static UA_StatusCode function_namespace0_generated_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ConfigurationVersionDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 14593LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "ConfigurationVersionDataType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14593LU));
}

/* KeyValuePair - ns=0;i=14533 */

static UA_StatusCode function_namespace0_generated_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "KeyValuePair");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 14533LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "KeyValuePair"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14533LU));
}

/* FieldMetaData - ns=0;i=14524 */

static UA_StatusCode function_namespace0_generated_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FieldMetaData");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 14524LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "FieldMetaData"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14524LU));
}

/* PublishedVariableDataType - ns=0;i=14273 */

static UA_StatusCode function_namespace0_generated_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PublishedVariableDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 14273LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "PublishedVariableDataType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14273LU));
}

/* Union - ns=0;i=12756 */

static UA_StatusCode function_namespace0_generated_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Union");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 12756LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "Union"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12756LU));
}

/* TrustListDataType - ns=0;i=12554 */

static UA_StatusCode function_namespace0_generated_40_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TrustListDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 12554LU),UA_NODEID_NUMERIC(ns[0], 22LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "TrustListDataType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12554LU));
}

/* LocalizedText - ns=0;i=21 */

static UA_StatusCode function_namespace0_generated_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LocalizedText");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 21LU),UA_NODEID_NUMERIC(ns[0], 24LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "LocalizedText"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21LU));
}

/* QualifiedName - ns=0;i=20 */

static UA_StatusCode function_namespace0_generated_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "QualifiedName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 20LU),UA_NODEID_NUMERIC(ns[0], 24LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "QualifiedName"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 20LU));
}

/* StatusCode - ns=0;i=19 */

static UA_StatusCode function_namespace0_generated_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "StatusCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 19LU),UA_NODEID_NUMERIC(ns[0], 24LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "StatusCode"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 19LU));
}

/* ExpandedNodeId - ns=0;i=18 */

static UA_StatusCode function_namespace0_generated_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ExpandedNodeId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 18LU),UA_NODEID_NUMERIC(ns[0], 24LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "ExpandedNodeId"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 18LU));
}

/* NodeId - ns=0;i=17 */

static UA_StatusCode function_namespace0_generated_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 17LU),UA_NODEID_NUMERIC(ns[0], 24LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "NodeId"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17LU));
}

/* XmlElement - ns=0;i=16 */

static UA_StatusCode function_namespace0_generated_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "XmlElement");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 16LU),UA_NODEID_NUMERIC(ns[0], 24LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "XmlElement"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 16LU));
}

/* ByteString - ns=0;i=15 */

static UA_StatusCode function_namespace0_generated_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ByteString");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 15LU),UA_NODEID_NUMERIC(ns[0], 24LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "ByteString"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15LU));
}

/* Image - ns=0;i=30 */

static UA_StatusCode function_namespace0_generated_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Image");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 30LU),UA_NODEID_NUMERIC(ns[0], 15LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "Image"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 30LU));
}

/* Guid - ns=0;i=14 */

static UA_StatusCode function_namespace0_generated_49_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Guid");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 14LU),UA_NODEID_NUMERIC(ns[0], 24LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "Guid"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14LU));
}

/* DateTime - ns=0;i=13 */

static UA_StatusCode function_namespace0_generated_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DateTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 13LU),UA_NODEID_NUMERIC(ns[0], 24LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "DateTime"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 13LU));
}

/* UtcTime - ns=0;i=294 */

static UA_StatusCode function_namespace0_generated_51_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UtcTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 294LU),UA_NODEID_NUMERIC(ns[0], 13LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "UtcTime"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 294LU));
}

/* String - ns=0;i=12 */

static UA_StatusCode function_namespace0_generated_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "String");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 12LU),UA_NODEID_NUMERIC(ns[0], 24LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "String"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12LU));
}

/* LocaleId - ns=0;i=295 */

static UA_StatusCode function_namespace0_generated_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LocaleId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 295LU),UA_NODEID_NUMERIC(ns[0], 12LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "LocaleId"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 295LU));
}

/* Boolean - ns=0;i=1 */

static UA_StatusCode function_namespace0_generated_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Boolean");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 1LU),UA_NODEID_NUMERIC(ns[0], 24LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "Boolean"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 1LU));
}

/* Enumeration - ns=0;i=29 */

static UA_StatusCode function_namespace0_generated_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Enumeration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 29LU),UA_NODEID_NUMERIC(ns[0], 24LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "Enumeration"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 29LU));
}

/* ServerState - ns=0;i=852 */

static UA_StatusCode function_namespace0_generated_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 852LU),UA_NODEID_NUMERIC(ns[0], 29LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "ServerState"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 852LU));
}

/* RedundancySupport - ns=0;i=851 */

static UA_StatusCode function_namespace0_generated_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RedundancySupport");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 851LU),UA_NODEID_NUMERIC(ns[0], 29LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "RedundancySupport"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 851LU));
}

/* EnumStrings - ns=0;i=7611 */

static UA_StatusCode function_namespace0_generated_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText variablenode_ns_0_i_7611_variant_DataContents[6];
variablenode_ns_0_i_7611_variant_DataContents[0] = UA_LOCALIZEDTEXT("", "None");
variablenode_ns_0_i_7611_variant_DataContents[1] = UA_LOCALIZEDTEXT("", "Cold");
variablenode_ns_0_i_7611_variant_DataContents[2] = UA_LOCALIZEDTEXT("", "Warm");
variablenode_ns_0_i_7611_variant_DataContents[3] = UA_LOCALIZEDTEXT("", "Hot");
variablenode_ns_0_i_7611_variant_DataContents[4] = UA_LOCALIZEDTEXT("", "Transparent");
variablenode_ns_0_i_7611_variant_DataContents[5] = UA_LOCALIZEDTEXT("", "HotAndMirrored");
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_7611_variant_DataContents, (UA_Int32) 6, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 7611LU),UA_NODEID_NUMERIC(ns[0], 851LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EnumStrings"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 7611LU));
}

/* ApplicationType - ns=0;i=307 */

static UA_StatusCode function_namespace0_generated_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ApplicationType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 307LU),UA_NODEID_NUMERIC(ns[0], 29LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "ApplicationType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 307LU));
}

/* EnumStrings - ns=0;i=7597 */

static UA_StatusCode function_namespace0_generated_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText variablenode_ns_0_i_7597_variant_DataContents[4];
variablenode_ns_0_i_7597_variant_DataContents[0] = UA_LOCALIZEDTEXT("", "Server");
variablenode_ns_0_i_7597_variant_DataContents[1] = UA_LOCALIZEDTEXT("", "Client");
variablenode_ns_0_i_7597_variant_DataContents[2] = UA_LOCALIZEDTEXT("", "ClientAndServer");
variablenode_ns_0_i_7597_variant_DataContents[3] = UA_LOCALIZEDTEXT("", "DiscoveryServer");
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_7597_variant_DataContents, (UA_Int32) 4, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 7597LU),UA_NODEID_NUMERIC(ns[0], 307LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EnumStrings"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 7597LU));
}

/* MessageSecurityMode - ns=0;i=302 */

static UA_StatusCode function_namespace0_generated_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MessageSecurityMode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 302LU),UA_NODEID_NUMERIC(ns[0], 29LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "MessageSecurityMode"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 302LU));
}

/* EnumStrings - ns=0;i=7595 */

static UA_StatusCode function_namespace0_generated_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText variablenode_ns_0_i_7595_variant_DataContents[4];
variablenode_ns_0_i_7595_variant_DataContents[0] = UA_LOCALIZEDTEXT("", "Invalid");
variablenode_ns_0_i_7595_variant_DataContents[1] = UA_LOCALIZEDTEXT("", "None");
variablenode_ns_0_i_7595_variant_DataContents[2] = UA_LOCALIZEDTEXT("", "Sign");
variablenode_ns_0_i_7595_variant_DataContents[3] = UA_LOCALIZEDTEXT("", "SignAndEncrypt");
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_7595_variant_DataContents, (UA_Int32) 4, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 7595LU),UA_NODEID_NUMERIC(ns[0], 302LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EnumStrings"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 7595LU));
}

/* PubSubState - ns=0;i=14647 */

static UA_StatusCode function_namespace0_generated_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PubSubState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 14647LU),UA_NODEID_NUMERIC(ns[0], 29LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "PubSubState"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14647LU));
}

/* EnumStrings - ns=0;i=14648 */

static UA_StatusCode function_namespace0_generated_64_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText variablenode_ns_0_i_14648_variant_DataContents[4];
variablenode_ns_0_i_14648_variant_DataContents[0] = UA_LOCALIZEDTEXT("", "Disabled");
variablenode_ns_0_i_14648_variant_DataContents[1] = UA_LOCALIZEDTEXT("", "Paused");
variablenode_ns_0_i_14648_variant_DataContents[2] = UA_LOCALIZEDTEXT("", "Operational");
variablenode_ns_0_i_14648_variant_DataContents[3] = UA_LOCALIZEDTEXT("", "Error");
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_14648_variant_DataContents, (UA_Int32) 4, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 14648LU),UA_NODEID_NUMERIC(ns[0], 14647LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EnumStrings"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14648LU));
}

/* AxisScaleEnumeration - ns=0;i=12077 */

static UA_StatusCode function_namespace0_generated_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AxisScaleEnumeration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 12077LU),UA_NODEID_NUMERIC(ns[0], 29LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "AxisScaleEnumeration"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12077LU));
}

/* EnumStrings - ns=0;i=12078 */

static UA_StatusCode function_namespace0_generated_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText variablenode_ns_0_i_12078_variant_DataContents[3];
variablenode_ns_0_i_12078_variant_DataContents[0] = UA_LOCALIZEDTEXT("", "Linear");
variablenode_ns_0_i_12078_variant_DataContents[1] = UA_LOCALIZEDTEXT("", "Log");
variablenode_ns_0_i_12078_variant_DataContents[2] = UA_LOCALIZEDTEXT("", "Ln");
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_12078_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12078LU),UA_NODEID_NUMERIC(ns[0], 12077LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EnumStrings"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12078LU));
}

/* NamingRuleType - ns=0;i=120 */

static UA_StatusCode function_namespace0_generated_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRuleType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 120LU),UA_NODEID_NUMERIC(ns[0], 29LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "NamingRuleType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 120LU));
}

/* EnumValues - ns=0;i=12169 */

static UA_StatusCode function_namespace0_generated_68_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7594LU);
UA_EnumValueType variablenode_ns_0_i_12169_variant_DataContents[3];

UA_init(&variablenode_ns_0_i_12169_variant_DataContents[0], &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
variablenode_ns_0_i_12169_variant_DataContents[0].value = (UA_Int64) 1;
variablenode_ns_0_i_12169_variant_DataContents[0].displayName = UA_LOCALIZEDTEXT("", "Mandatory");
variablenode_ns_0_i_12169_variant_DataContents[0].description = UA_LOCALIZEDTEXT("", "The BrowseName must appear in all instances of the type.");

UA_init(&variablenode_ns_0_i_12169_variant_DataContents[1], &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
variablenode_ns_0_i_12169_variant_DataContents[1].value = (UA_Int64) 2;
variablenode_ns_0_i_12169_variant_DataContents[1].displayName = UA_LOCALIZEDTEXT("", "Optional");
variablenode_ns_0_i_12169_variant_DataContents[1].description = UA_LOCALIZEDTEXT("", "The BrowseName may appear in an instance of the type.");

UA_init(&variablenode_ns_0_i_12169_variant_DataContents[2], &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
variablenode_ns_0_i_12169_variant_DataContents[2].value = (UA_Int64) 3;
variablenode_ns_0_i_12169_variant_DataContents[2].displayName = UA_LOCALIZEDTEXT("", "Constraint");
variablenode_ns_0_i_12169_variant_DataContents[2].description = UA_LOCALIZEDTEXT("", "The modelling rule defines a constraint and the BrowseName is not used in an instance of the type.");
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_12169_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumValues");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12169LU),UA_NODEID_NUMERIC(ns[0], 120LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EnumValues"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);



return retVal;
}

static UA_StatusCode function_namespace0_generated_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12169LU));
}

/* Number - ns=0;i=26 */

static UA_StatusCode function_namespace0_generated_69_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Number");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 26LU),UA_NODEID_NUMERIC(ns[0], 24LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "Number"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 26LU));
}

/* Decimal - ns=0;i=50 */

static UA_StatusCode function_namespace0_generated_70_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Decimal");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 50LU),UA_NODEID_NUMERIC(ns[0], 26LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "Decimal"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 50LU));
}

/* UInteger - ns=0;i=28 */

static UA_StatusCode function_namespace0_generated_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "UInteger");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 28LU),UA_NODEID_NUMERIC(ns[0], 26LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "UInteger"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 28LU));
}

/* UInt64 - ns=0;i=9 */

static UA_StatusCode function_namespace0_generated_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UInt64");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 9LU),UA_NODEID_NUMERIC(ns[0], 28LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "UInt64"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 9LU));
}

/* UInt32 - ns=0;i=7 */

static UA_StatusCode function_namespace0_generated_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UInt32");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 7LU),UA_NODEID_NUMERIC(ns[0], 28LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "UInt32"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 7LU));
}

/* VersionTime - ns=0;i=20998 */

static UA_StatusCode function_namespace0_generated_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VersionTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 20998LU),UA_NODEID_NUMERIC(ns[0], 7LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "VersionTime"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 20998LU));
}

/* DataSetFieldContentMask - ns=0;i=15583 */

static UA_StatusCode function_namespace0_generated_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetFieldContentMask");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 15583LU),UA_NODEID_NUMERIC(ns[0], 7LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "DataSetFieldContentMask"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15583LU));
}

/* OptionSetValues - ns=0;i=15584 */

static UA_StatusCode function_namespace0_generated_76_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText variablenode_ns_0_i_15584_variant_DataContents[6];
variablenode_ns_0_i_15584_variant_DataContents[0] = UA_LOCALIZEDTEXT("", "StatusCode");
variablenode_ns_0_i_15584_variant_DataContents[1] = UA_LOCALIZEDTEXT("", "SourceTimestamp");
variablenode_ns_0_i_15584_variant_DataContents[2] = UA_LOCALIZEDTEXT("", "ServerTimestamp");
variablenode_ns_0_i_15584_variant_DataContents[3] = UA_LOCALIZEDTEXT("", "SourcePicoSeconds");
variablenode_ns_0_i_15584_variant_DataContents[4] = UA_LOCALIZEDTEXT("", "ServerPicoSeconds");
variablenode_ns_0_i_15584_variant_DataContents[5] = UA_LOCALIZEDTEXT("", "RawDataEncoding");
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_15584_variant_DataContents, (UA_Int32) 6, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OptionSetValues");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 15584LU),UA_NODEID_NUMERIC(ns[0], 15583LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "OptionSetValues"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15584LU));
}

/* UInt16 - ns=0;i=5 */

static UA_StatusCode function_namespace0_generated_77_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UInt16");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 5LU),UA_NODEID_NUMERIC(ns[0], 28LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "UInt16"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 5LU));
}

/* Byte - ns=0;i=3 */

static UA_StatusCode function_namespace0_generated_78_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Byte");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 3LU),UA_NODEID_NUMERIC(ns[0], 28LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "Byte"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3LU));
}

/* Integer - ns=0;i=27 */

static UA_StatusCode function_namespace0_generated_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Integer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 27LU),UA_NODEID_NUMERIC(ns[0], 26LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "Integer"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 27LU));
}

/* Int64 - ns=0;i=8 */

static UA_StatusCode function_namespace0_generated_80_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Int64");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 8LU),UA_NODEID_NUMERIC(ns[0], 27LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "Int64"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 8LU));
}

/* Int32 - ns=0;i=6 */

static UA_StatusCode function_namespace0_generated_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Int32");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 6LU),UA_NODEID_NUMERIC(ns[0], 27LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "Int32"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 6LU));
}

/* Int16 - ns=0;i=4 */

static UA_StatusCode function_namespace0_generated_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Int16");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 4LU),UA_NODEID_NUMERIC(ns[0], 27LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "Int16"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 4LU));
}

/* SByte - ns=0;i=2 */

static UA_StatusCode function_namespace0_generated_83_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SByte");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 2LU),UA_NODEID_NUMERIC(ns[0], 27LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "SByte"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2LU));
}

/* Double - ns=0;i=11 */

static UA_StatusCode function_namespace0_generated_84_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Double");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 11LU),UA_NODEID_NUMERIC(ns[0], 26LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "Double"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_84_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11LU));
}

/* Duration - ns=0;i=290 */

static UA_StatusCode function_namespace0_generated_85_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Duration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 290LU),UA_NODEID_NUMERIC(ns[0], 11LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "Duration"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 290LU));
}

/* Float - ns=0;i=10 */

static UA_StatusCode function_namespace0_generated_86_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Float");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,UA_NODEID_NUMERIC(ns[0], 10LU),UA_NODEID_NUMERIC(ns[0], 26LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "Float"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 10LU));
}

/* DataItemType - ns=0;i=2365 */

static UA_StatusCode function_namespace0_generated_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataItemType");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "A variable that contains live automation data.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 2365LU),UA_NODEID_NUMERIC(ns[0], 63LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "DataItemType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2365LU));
}

/* DiscreteItemType - ns=0;i=2372 */

static UA_StatusCode function_namespace0_generated_88_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.isAbstract = true;
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DiscreteItemType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 2372LU),UA_NODEID_NUMERIC(ns[0], 2365LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "DiscreteItemType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2372LU));
}

/* MultiStateDiscreteType - ns=0;i=2376 */

static UA_StatusCode function_namespace0_generated_89_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 28LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MultiStateDiscreteType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 2376LU),UA_NODEID_NUMERIC(ns[0], 2372LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "MultiStateDiscreteType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2376LU));
}

/* EnumStrings - ns=0;i=2377 */

static UA_StatusCode function_namespace0_generated_90_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2377LU),UA_NODEID_NUMERIC(ns[0], 2376LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EnumStrings"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2377LU));
}

/* TwoStateDiscreteType - ns=0;i=2373 */

static UA_StatusCode function_namespace0_generated_91_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TwoStateDiscreteType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 2373LU),UA_NODEID_NUMERIC(ns[0], 2372LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "TwoStateDiscreteType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_91_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2373LU));
}

/* TrueState - ns=0;i=2375 */

static UA_StatusCode function_namespace0_generated_92_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TrueState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2375LU),UA_NODEID_NUMERIC(ns[0], 2373LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "TrueState"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2375LU));
}

/* FalseState - ns=0;i=2374 */

static UA_StatusCode function_namespace0_generated_93_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "FalseState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2374LU),UA_NODEID_NUMERIC(ns[0], 2373LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "FalseState"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_93_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2374LU));
}

/* MultiStateValueDiscreteType - ns=0;i=11238 */

static UA_StatusCode function_namespace0_generated_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 26LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MultiStateValueDiscreteType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 11238LU),UA_NODEID_NUMERIC(ns[0], 2372LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "MultiStateValueDiscreteType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11238LU));
}

/* ValueAsText - ns=0;i=11461 */

static UA_StatusCode function_namespace0_generated_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ValueAsText");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11461LU),UA_NODEID_NUMERIC(ns[0], 11238LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "ValueAsText"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11461LU));
}

/* EnumValues - ns=0;i=11241 */

static UA_StatusCode function_namespace0_generated_96_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7594LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumValues");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11241LU),UA_NODEID_NUMERIC(ns[0], 11238LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EnumValues"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_96_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11241LU));
}

/* AnalogItemType - ns=0;i=2368 */

static UA_StatusCode function_namespace0_generated_97_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 26LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AnalogItemType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 2368LU),UA_NODEID_NUMERIC(ns[0], 2365LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "AnalogItemType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_97_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2368LU));
}

/* EngineeringUnits - ns=0;i=2371 */

static UA_StatusCode function_namespace0_generated_98_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2371LU),UA_NODEID_NUMERIC(ns[0], 2368LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_98_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2371LU));
}

/* InstrumentRange - ns=0;i=2370 */

static UA_StatusCode function_namespace0_generated_99_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884LU);
attr.displayName = UA_LOCALIZEDTEXT("", "InstrumentRange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2370LU),UA_NODEID_NUMERIC(ns[0], 2368LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InstrumentRange"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_99_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2370LU));
}

/* EURange - ns=0;i=2369 */

static UA_StatusCode function_namespace0_generated_100_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2369LU),UA_NODEID_NUMERIC(ns[0], 2368LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EURange"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_100_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2369LU));
}

/* ValuePrecision - ns=0;i=2367 */

static UA_StatusCode function_namespace0_generated_101_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ValuePrecision");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "The maximum precision that the server can maintain for the item based on restrictions in the target environment.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2367LU),UA_NODEID_NUMERIC(ns[0], 2365LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "ValuePrecision"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_101_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2367LU));
}

/* Definition - ns=0;i=2366 */

static UA_StatusCode function_namespace0_generated_102_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Definition");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "A vendor-specific, human readable string that specifies how the value of this DataItem is calculated.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2366LU),UA_NODEID_NUMERIC(ns[0], 2365LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "Definition"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_102_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2366LU));
}

/* SubscribedDataSetType - ns=0;i=15108 */

static UA_StatusCode function_namespace0_generated_103_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SubscribedDataSetType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 15108LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "SubscribedDataSetType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_103_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15108LU));
}

/* TargetVariablesType - ns=0;i=15111 */

static UA_StatusCode function_namespace0_generated_104_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TargetVariablesType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 15111LU),UA_NODEID_NUMERIC(ns[0], 15108LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "TargetVariablesType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_104_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15111LU));
}

/* RemoveTargetVariables - ns=0;i=15118 */

static UA_StatusCode function_namespace0_generated_105_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RemoveTargetVariables");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 15118LU),UA_NODEID_NUMERIC(ns[0], 15108LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RemoveTargetVariables"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 15118LU), UA_NODEID_NUMERIC(ns[0], 47LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15111LU), false);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_105_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15118LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=15120 */

static UA_StatusCode function_namespace0_generated_106_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_15120_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_15120_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_15120_variant_DataContents[0].name = UA_STRING("AddResults");
variablenode_ns_0_i_15120_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 19LU);
variablenode_ns_0_i_15120_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_15120_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 15120LU),UA_NODEID_NUMERIC(ns[0], 15118LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "OutputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_106_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15120LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=15119 */

static UA_StatusCode function_namespace0_generated_107_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_15119_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_15119_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_15119_variant_DataContents[0].name = UA_STRING("ConfigurationVersion");
variablenode_ns_0_i_15119_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 14593LU);
variablenode_ns_0_i_15119_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_15119_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 15119LU),UA_NODEID_NUMERIC(ns[0], 15118LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_107_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15119LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AddTargetVariables - ns=0;i=15115 */

static UA_StatusCode function_namespace0_generated_108_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AddTargetVariables");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 15115LU),UA_NODEID_NUMERIC(ns[0], 15108LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddTargetVariables"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 15115LU), UA_NODEID_NUMERIC(ns[0], 47LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15111LU), false);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_108_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15115LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=15117 */

static UA_StatusCode function_namespace0_generated_109_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_15117_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_15117_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_15117_variant_DataContents[0].name = UA_STRING("AddResults");
variablenode_ns_0_i_15117_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 19LU);
variablenode_ns_0_i_15117_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_15117_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 15117LU),UA_NODEID_NUMERIC(ns[0], 15115LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "OutputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_109_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15117LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=15116 */

static UA_StatusCode function_namespace0_generated_110_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_15116_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_15116_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_15116_variant_DataContents[0].name = UA_STRING("ConfigurationVersion");
variablenode_ns_0_i_15116_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 14593LU);
variablenode_ns_0_i_15116_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_15116_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 15116LU),UA_NODEID_NUMERIC(ns[0], 15115LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_110_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15116LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* TargetVariables - ns=0;i=15114 */

static UA_StatusCode function_namespace0_generated_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TargetVariables");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 15114LU),UA_NODEID_NUMERIC(ns[0], 15111LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "TargetVariables"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15114LU));
}

/* DataSetReaderMessageType - ns=0;i=21104 */

static UA_StatusCode function_namespace0_generated_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetReaderMessageType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 21104LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "DataSetReaderMessageType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21104LU));
}

/* UadpDataSetReaderMessageType - ns=0;i=21116 */

static UA_StatusCode function_namespace0_generated_113_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UadpDataSetReaderMessageType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 21116LU),UA_NODEID_NUMERIC(ns[0], 21104LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "UadpDataSetReaderMessageType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21116LU));
}

/* DataSetReaderTransportType - ns=0;i=15319 */

static UA_StatusCode function_namespace0_generated_114_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetReaderTransportType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 15319LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "DataSetReaderTransportType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15319LU));
}

/* BrokerDataSetReaderTransportType - ns=0;i=21142 */

static UA_StatusCode function_namespace0_generated_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "BrokerDataSetReaderTransportType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 21142LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "BrokerDataSetReaderTransportType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 21142LU), UA_NODEID_NUMERIC(ns[0], 45LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15319LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21142LU));
}

/* DataSetReaderType - ns=0;i=15306 */

static UA_StatusCode function_namespace0_generated_116_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetReaderType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 15306LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "DataSetReaderType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_116_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15306LU));
}

/* MessageSettings - ns=0;i=21103 */

static UA_StatusCode function_namespace0_generated_117_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MessageSettings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 21103LU),UA_NODEID_NUMERIC(ns[0], 15306LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "MessageSettings"),UA_NODEID_NUMERIC(ns[0], 21104LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_117_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21103LU));
}

/* MessageReceiveTimeout - ns=0;i=21102 */

static UA_StatusCode function_namespace0_generated_118_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MessageReceiveTimeout");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 21102LU),UA_NODEID_NUMERIC(ns[0], 15306LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MessageReceiveTimeout"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_118_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21102LU));
}

/* DataSetFieldContentMask - ns=0;i=21101 */

static UA_StatusCode function_namespace0_generated_119_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15583LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetFieldContentMask");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 21101LU),UA_NODEID_NUMERIC(ns[0], 15306LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DataSetFieldContentMask"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_119_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21101LU));
}

/* DataSetMetaData - ns=0;i=21100 */

static UA_StatusCode function_namespace0_generated_120_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 14523LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetMetaData");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 21100LU),UA_NODEID_NUMERIC(ns[0], 15306LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DataSetMetaData"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_120_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21100LU));
}

/* DataSetWriterId - ns=0;i=21099 */

static UA_StatusCode function_namespace0_generated_121_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetWriterId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 21099LU),UA_NODEID_NUMERIC(ns[0], 15306LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DataSetWriterId"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_121_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21099LU));
}

/* WriterGroupId - ns=0;i=21098 */

static UA_StatusCode function_namespace0_generated_122_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
attr.displayName = UA_LOCALIZEDTEXT("", "WriterGroupId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 21098LU),UA_NODEID_NUMERIC(ns[0], 15306LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "WriterGroupId"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_122_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21098LU));
}

/* PublisherId - ns=0;i=21097 */

static UA_StatusCode function_namespace0_generated_123_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublisherId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 21097LU),UA_NODEID_NUMERIC(ns[0], 15306LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "PublisherId"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_123_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21097LU));
}

/* DataSetReaderProperties - ns=0;i=17494 */

static UA_StatusCode function_namespace0_generated_124_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 14533LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetReaderProperties");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17494LU),UA_NODEID_NUMERIC(ns[0], 15306LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DataSetReaderProperties"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17494LU));
}

/* SubscribedDataSet - ns=0;i=15316 */

static UA_StatusCode function_namespace0_generated_125_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SubscribedDataSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 15316LU),UA_NODEID_NUMERIC(ns[0], 15306LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SubscribedDataSet"),UA_NODEID_NUMERIC(ns[0], 15108LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15316LU));
}

/* TransportSettings - ns=0;i=15311 */

static UA_StatusCode function_namespace0_generated_126_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TransportSettings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 15311LU),UA_NODEID_NUMERIC(ns[0], 15306LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TransportSettings"),UA_NODEID_NUMERIC(ns[0], 15319LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_126_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15311LU));
}

/* DataSetWriterMessageType - ns=0;i=21096 */

static UA_StatusCode function_namespace0_generated_127_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetWriterMessageType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 21096LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "DataSetWriterMessageType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_127_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21096LU));
}

/* UadpDataSetWriterMessageType - ns=0;i=21111 */

static UA_StatusCode function_namespace0_generated_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UadpDataSetWriterMessageType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 21111LU),UA_NODEID_NUMERIC(ns[0], 21096LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "UadpDataSetWriterMessageType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21111LU));
}

/* WriterGroupMessageType - ns=0;i=17998 */

static UA_StatusCode function_namespace0_generated_129_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "WriterGroupMessageType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 17998LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "WriterGroupMessageType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17998LU));
}

/* UadpWriterGroupMessageType - ns=0;i=21105 */

static UA_StatusCode function_namespace0_generated_130_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UadpWriterGroupMessageType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 21105LU),UA_NODEID_NUMERIC(ns[0], 17998LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "UadpWriterGroupMessageType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_130_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21105LU));
}

/* SelectionListType - ns=0;i=16309 */

static UA_StatusCode function_namespace0_generated_131_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SelectionListType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 16309LU),UA_NODEID_NUMERIC(ns[0], 63LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "SelectionListType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_131_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 16309LU));
}

/* SelectionDescriptions - ns=0;i=17633 */

static UA_StatusCode function_namespace0_generated_132_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SelectionDescriptions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17633LU),UA_NODEID_NUMERIC(ns[0], 16309LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "SelectionDescriptions"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_132_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17633LU));
}

/* Selections - ns=0;i=17632 */

static UA_StatusCode function_namespace0_generated_133_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Selections");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17632LU),UA_NODEID_NUMERIC(ns[0], 16309LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "Selections"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_133_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17632LU));
}

/* RestrictToList - ns=0;i=16312 */

static UA_StatusCode function_namespace0_generated_134_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RestrictToList");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 16312LU),UA_NODEID_NUMERIC(ns[0], 16309LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "RestrictToList"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_134_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 16312LU));
}

/* PubSubStatusType - ns=0;i=14643 */

static UA_StatusCode function_namespace0_generated_135_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PubSubStatusType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 14643LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "PubSubStatusType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_135_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14643LU));
}

/* Status - ns=0;i=15307 */

static UA_StatusCode function_namespace0_generated_136_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Status");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 15307LU),UA_NODEID_NUMERIC(ns[0], 15306LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "Status"),UA_NODEID_NUMERIC(ns[0], 14643LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_136_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15307LU));
}

/* State - ns=0;i=15308 */

static UA_StatusCode function_namespace0_generated_137_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 14647LU);
attr.displayName = UA_LOCALIZEDTEXT("", "State");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 15308LU),UA_NODEID_NUMERIC(ns[0], 15307LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "State"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15308LU));
}

/* Disable - ns=0;i=14646 */

static UA_StatusCode function_namespace0_generated_138_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Disable");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 14646LU),UA_NODEID_NUMERIC(ns[0], 14643LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "Disable"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_138_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14646LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Enable - ns=0;i=14645 */

static UA_StatusCode function_namespace0_generated_139_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Enable");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 14645LU),UA_NODEID_NUMERIC(ns[0], 14643LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "Enable"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_139_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14645LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* State - ns=0;i=14644 */

static UA_StatusCode function_namespace0_generated_140_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 14647LU);
attr.displayName = UA_LOCALIZEDTEXT("", "State");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 14644LU),UA_NODEID_NUMERIC(ns[0], 14643LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "State"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_140_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14644LU));
}

/* StandaloneSubscribedDataSetType - ns=0;i=23828 */

static UA_StatusCode function_namespace0_generated_141_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "StandaloneSubscribedDataSetType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 23828LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "StandaloneSubscribedDataSetType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_141_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23828LU));
}

/* IsConnected - ns=0;i=23831 */

static UA_StatusCode function_namespace0_generated_142_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "IsConnected");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 23831LU),UA_NODEID_NUMERIC(ns[0], 23828LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "IsConnected"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23831LU));
}

/* DataSetMetaData - ns=0;i=23830 */

static UA_StatusCode function_namespace0_generated_143_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 14523LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetMetaData");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 23830LU),UA_NODEID_NUMERIC(ns[0], 23828LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DataSetMetaData"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_143_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23830LU));
}

/* SubscribedDataSet - ns=0;i=23829 */

static UA_StatusCode function_namespace0_generated_144_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SubscribedDataSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 23829LU),UA_NODEID_NUMERIC(ns[0], 23828LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SubscribedDataSet"),UA_NODEID_NUMERIC(ns[0], 15108LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_144_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23829LU));
}

/* SubscribedDataSetFolderType - ns=0;i=23795 */

static UA_StatusCode function_namespace0_generated_145_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SubscribedDataSetFolderType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 23795LU),UA_NODEID_NUMERIC(ns[0], 61LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "SubscribedDataSetFolderType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_145_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23795LU));
}

/* RemoveDataSetFolder - ns=0;i=23819 */

static UA_StatusCode function_namespace0_generated_146_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RemoveDataSetFolder");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 23819LU),UA_NODEID_NUMERIC(ns[0], 23795LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RemoveDataSetFolder"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_146_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23819LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=23820 */

static UA_StatusCode function_namespace0_generated_147_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_23820_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_23820_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_23820_variant_DataContents[0].name = UA_STRING("DataSetFolderNodeId");
variablenode_ns_0_i_23820_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_23820_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_23820_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 23820LU),UA_NODEID_NUMERIC(ns[0], 23819LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_147_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23820LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AddDataSetFolder - ns=0;i=23816 */

static UA_StatusCode function_namespace0_generated_148_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AddDataSetFolder");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 23816LU),UA_NODEID_NUMERIC(ns[0], 23795LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddDataSetFolder"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_148_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23816LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=23818 */

static UA_StatusCode function_namespace0_generated_149_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_23818_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_23818_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_23818_variant_DataContents[0].name = UA_STRING("DataSetFolderNodeId");
variablenode_ns_0_i_23818_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_23818_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_23818_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 23818LU),UA_NODEID_NUMERIC(ns[0], 23816LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "OutputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_149_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23818LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=23817 */

static UA_StatusCode function_namespace0_generated_150_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_23817_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_23817_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_23817_variant_DataContents[0].name = UA_STRING("Name");
variablenode_ns_0_i_23817_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_0_i_23817_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_23817_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 23817LU),UA_NODEID_NUMERIC(ns[0], 23816LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_150_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23817LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* RemoveSubscribedDataSet - ns=0;i=23814 */

static UA_StatusCode function_namespace0_generated_151_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RemoveSubscribedDataSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 23814LU),UA_NODEID_NUMERIC(ns[0], 23795LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RemoveSubscribedDataSet"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_151_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23814LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=23815 */

static UA_StatusCode function_namespace0_generated_152_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_23815_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_23815_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_23815_variant_DataContents[0].name = UA_STRING("SubscribedDataSetNodeId");
variablenode_ns_0_i_23815_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_23815_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_23815_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 23815LU),UA_NODEID_NUMERIC(ns[0], 23814LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_152_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23815LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AddSubscribedDataSet - ns=0;i=23811 */

static UA_StatusCode function_namespace0_generated_153_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AddSubscribedDataSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 23811LU),UA_NODEID_NUMERIC(ns[0], 23795LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddSubscribedDataSet"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_153_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23811LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=23813 */

static UA_StatusCode function_namespace0_generated_154_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_23813_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_23813_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_23813_variant_DataContents[0].name = UA_STRING("SubscribedDataSetNodeId");
variablenode_ns_0_i_23813_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_23813_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_23813_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 23813LU),UA_NODEID_NUMERIC(ns[0], 23811LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "OutputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_154_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23813LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=23812 */

static UA_StatusCode function_namespace0_generated_155_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_23812_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_23812_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_23812_variant_DataContents[0].name = UA_STRING("SubscribedDataSet");
variablenode_ns_0_i_23812_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 23600LU);
variablenode_ns_0_i_23812_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_23812_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 23812LU),UA_NODEID_NUMERIC(ns[0], 23811LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_155_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23812LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* <StandaloneSubscribedDataSetName> - ns=0;i=23807 */

static UA_StatusCode function_namespace0_generated_156_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<StandaloneSubscribedDataSetName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 23807LU),UA_NODEID_NUMERIC(ns[0], 23795LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "<StandaloneSubscribedDataSetName>"),UA_NODEID_NUMERIC(ns[0], 23828LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_156_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23807LU));
}

/* IsConnected - ns=0;i=23810 */

static UA_StatusCode function_namespace0_generated_157_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "IsConnected");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 23810LU),UA_NODEID_NUMERIC(ns[0], 23807LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "IsConnected"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_157_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23810LU));
}

/* DataSetMetaData - ns=0;i=23809 */

static UA_StatusCode function_namespace0_generated_158_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 14523LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetMetaData");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 23809LU),UA_NODEID_NUMERIC(ns[0], 23807LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DataSetMetaData"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_158_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23809LU));
}

/* SubscribedDataSet - ns=0;i=23808 */

static UA_StatusCode function_namespace0_generated_159_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SubscribedDataSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 23808LU),UA_NODEID_NUMERIC(ns[0], 23807LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SubscribedDataSet"),UA_NODEID_NUMERIC(ns[0], 15108LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_159_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23808LU));
}

/* <SubscribedDataSetFolderName> - ns=0;i=23796 */

static UA_StatusCode function_namespace0_generated_160_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<SubscribedDataSetFolderName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 23796LU),UA_NODEID_NUMERIC(ns[0], 23795LU),UA_NODEID_NUMERIC(ns[0], 35LU),UA_QUALIFIEDNAME(ns[0], "<SubscribedDataSetFolderName>"),UA_NODEID_NUMERIC(ns[0], 23795LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_160_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23796LU));
}

/* RemoveDataSetFolder - ns=0;i=23805 */

static UA_StatusCode function_namespace0_generated_161_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RemoveDataSetFolder");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 23805LU),UA_NODEID_NUMERIC(ns[0], 23796LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RemoveDataSetFolder"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_161_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23805LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=23806 */

static UA_StatusCode function_namespace0_generated_162_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_23806_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_23806_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_23806_variant_DataContents[0].name = UA_STRING("DataSetFolderNodeId");
variablenode_ns_0_i_23806_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_23806_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_23806_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 23806LU),UA_NODEID_NUMERIC(ns[0], 23805LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_162_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23806LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AddDataSetFolder - ns=0;i=23802 */

static UA_StatusCode function_namespace0_generated_163_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AddDataSetFolder");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 23802LU),UA_NODEID_NUMERIC(ns[0], 23796LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddDataSetFolder"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_163_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23802LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=23804 */

static UA_StatusCode function_namespace0_generated_164_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_23804_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_23804_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_23804_variant_DataContents[0].name = UA_STRING("DataSetFolderNodeId");
variablenode_ns_0_i_23804_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_23804_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_23804_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 23804LU),UA_NODEID_NUMERIC(ns[0], 23802LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "OutputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_164_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23804LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=23803 */

static UA_StatusCode function_namespace0_generated_165_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_23803_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_23803_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_23803_variant_DataContents[0].name = UA_STRING("Name");
variablenode_ns_0_i_23803_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_0_i_23803_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_23803_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 23803LU),UA_NODEID_NUMERIC(ns[0], 23802LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_165_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23803LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* RemoveSubscribedDataSet - ns=0;i=23800 */

static UA_StatusCode function_namespace0_generated_166_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RemoveSubscribedDataSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 23800LU),UA_NODEID_NUMERIC(ns[0], 23796LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RemoveSubscribedDataSet"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_166_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23800LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=23801 */

static UA_StatusCode function_namespace0_generated_167_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_23801_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_23801_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_23801_variant_DataContents[0].name = UA_STRING("SubscribedDataSetNodeId");
variablenode_ns_0_i_23801_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_23801_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_23801_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 23801LU),UA_NODEID_NUMERIC(ns[0], 23800LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_167_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23801LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AddSubscribedDataSet - ns=0;i=23797 */

static UA_StatusCode function_namespace0_generated_168_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AddSubscribedDataSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 23797LU),UA_NODEID_NUMERIC(ns[0], 23796LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddSubscribedDataSet"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_168_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23797LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=23799 */

static UA_StatusCode function_namespace0_generated_169_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_23799_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_23799_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_23799_variant_DataContents[0].name = UA_STRING("SubscribedDataSetNodeId");
variablenode_ns_0_i_23799_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_23799_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_23799_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 23799LU),UA_NODEID_NUMERIC(ns[0], 23797LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "OutputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_169_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23799LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=23798 */

static UA_StatusCode function_namespace0_generated_170_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_23798_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_23798_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_23798_variant_DataContents[0].name = UA_STRING("SubscribedDataSet");
variablenode_ns_0_i_23798_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 23600LU);
variablenode_ns_0_i_23798_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_23798_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 23798LU),UA_NODEID_NUMERIC(ns[0], 23797LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_170_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23798LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* DataSetWriterType - ns=0;i=15298 */

static UA_StatusCode function_namespace0_generated_171_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetWriterType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 15298LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "DataSetWriterType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_171_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15298LU));
}

/* KeyFrameCount - ns=0;i=21094 */

static UA_StatusCode function_namespace0_generated_172_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "KeyFrameCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 21094LU),UA_NODEID_NUMERIC(ns[0], 15298LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "KeyFrameCount"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_172_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21094LU));
}

/* DataSetFieldContentMask - ns=0;i=21093 */

static UA_StatusCode function_namespace0_generated_173_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15583LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetFieldContentMask");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 21093LU),UA_NODEID_NUMERIC(ns[0], 15298LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DataSetFieldContentMask"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_173_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21093LU));
}

/* DataSetWriterId - ns=0;i=21092 */

static UA_StatusCode function_namespace0_generated_174_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetWriterId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 21092LU),UA_NODEID_NUMERIC(ns[0], 15298LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DataSetWriterId"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_174_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21092LU));
}

/* DataSetWriterProperties - ns=0;i=17493 */

static UA_StatusCode function_namespace0_generated_175_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 14533LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetWriterProperties");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17493LU),UA_NODEID_NUMERIC(ns[0], 15298LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DataSetWriterProperties"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_175_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17493LU));
}

/* TransportSettings - ns=0;i=15303 */

static UA_StatusCode function_namespace0_generated_176_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TransportSettings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 15303LU),UA_NODEID_NUMERIC(ns[0], 15298LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TransportSettings"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_176_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15303LU));
}

/* Status - ns=0;i=15299 */

static UA_StatusCode function_namespace0_generated_177_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Status");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 15299LU),UA_NODEID_NUMERIC(ns[0], 15298LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "Status"),UA_NODEID_NUMERIC(ns[0], 14643LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_177_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15299LU));
}

/* State - ns=0;i=15300 */

static UA_StatusCode function_namespace0_generated_178_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 14647LU);
attr.displayName = UA_LOCALIZEDTEXT("", "State");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 15300LU),UA_NODEID_NUMERIC(ns[0], 15299LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "State"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_178_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15300LU));
}

/* PubSubGroupType - ns=0;i=14232 */

static UA_StatusCode function_namespace0_generated_179_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PubSubGroupType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 14232LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "PubSubGroupType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_179_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14232LU));
}

/* ReaderGroupType - ns=0;i=17999 */

static UA_StatusCode function_namespace0_generated_180_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReaderGroupType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 17999LU),UA_NODEID_NUMERIC(ns[0], 14232LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "ReaderGroupType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_180_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17999LU));
}

/* RemoveDataSetReader - ns=0;i=21085 */

static UA_StatusCode function_namespace0_generated_181_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RemoveDataSetReader");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 21085LU),UA_NODEID_NUMERIC(ns[0], 17999LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RemoveDataSetReader"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_181_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21085LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=21086 */

static UA_StatusCode function_namespace0_generated_182_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_21086_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_21086_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_21086_variant_DataContents[0].name = UA_STRING("DataSetReaderNodeId");
variablenode_ns_0_i_21086_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15623LU);
variablenode_ns_0_i_21086_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_21086_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 21086LU),UA_NODEID_NUMERIC(ns[0], 21085LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_182_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21086LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AddDataSetReader - ns=0;i=21082 */

static UA_StatusCode function_namespace0_generated_183_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AddDataSetReader");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 21082LU),UA_NODEID_NUMERIC(ns[0], 17999LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddDataSetReader"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_183_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21082LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=21084 */

static UA_StatusCode function_namespace0_generated_184_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_21084_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_21084_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_21084_variant_DataContents[0].name = UA_STRING("DataSetReaderNodeId");
variablenode_ns_0_i_21084_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_21084_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_21084_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 21084LU),UA_NODEID_NUMERIC(ns[0], 21082LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "OutputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_184_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21084LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=21083 */

static UA_StatusCode function_namespace0_generated_185_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_21083_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_21083_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_21083_variant_DataContents[0].name = UA_STRING("Configuration");
variablenode_ns_0_i_21083_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15623LU);
variablenode_ns_0_i_21083_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_21083_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 21083LU),UA_NODEID_NUMERIC(ns[0], 21082LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_185_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21083LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* <DataSetReaderName> - ns=0;i=18076 */

static UA_StatusCode function_namespace0_generated_186_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<DataSetReaderName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 18076LU),UA_NODEID_NUMERIC(ns[0], 17999LU),UA_NODEID_NUMERIC(ns[0], 15297LU),UA_QUALIFIEDNAME(ns[0], "<DataSetReaderName>"),UA_NODEID_NUMERIC(ns[0], 15306LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_186_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 18076LU));
}

/* WriterGroupType - ns=0;i=17725 */

static UA_StatusCode function_namespace0_generated_187_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "WriterGroupType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 17725LU),UA_NODEID_NUMERIC(ns[0], 14232LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "WriterGroupType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_187_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17725LU));
}

/* RemoveDataSetWriter - ns=0;i=17992 */

static UA_StatusCode function_namespace0_generated_188_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RemoveDataSetWriter");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 17992LU),UA_NODEID_NUMERIC(ns[0], 17725LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RemoveDataSetWriter"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_188_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17992LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=17993 */

static UA_StatusCode function_namespace0_generated_189_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_17993_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_17993_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_17993_variant_DataContents[0].name = UA_STRING("DataSetWriterNodeId");
variablenode_ns_0_i_17993_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_17993_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_17993_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17993LU),UA_NODEID_NUMERIC(ns[0], 17992LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_189_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17993LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AddDataSetWriter - ns=0;i=17969 */

static UA_StatusCode function_namespace0_generated_190_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AddDataSetWriter");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 17969LU),UA_NODEID_NUMERIC(ns[0], 17725LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddDataSetWriter"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_190_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17969LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=17987 */

static UA_StatusCode function_namespace0_generated_191_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_17987_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_17987_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_17987_variant_DataContents[0].name = UA_STRING("DataSetWriterNodeId");
variablenode_ns_0_i_17987_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_17987_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_17987_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17987LU),UA_NODEID_NUMERIC(ns[0], 17969LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "OutputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_191_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17987LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=17976 */

static UA_StatusCode function_namespace0_generated_192_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_17976_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_17976_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_17976_variant_DataContents[0].name = UA_STRING("Configuration");
variablenode_ns_0_i_17976_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15597LU);
variablenode_ns_0_i_17976_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_17976_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17976LU),UA_NODEID_NUMERIC(ns[0], 17969LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_192_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17976LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* <DataSetWriterName> - ns=0;i=17743 */

static UA_StatusCode function_namespace0_generated_193_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<DataSetWriterName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 17743LU),UA_NODEID_NUMERIC(ns[0], 17725LU),UA_NODEID_NUMERIC(ns[0], 15296LU),UA_QUALIFIEDNAME(ns[0], "<DataSetWriterName>"),UA_NODEID_NUMERIC(ns[0], 15298LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_193_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17743LU));
}

/* Status - ns=0;i=17749 */

static UA_StatusCode function_namespace0_generated_194_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Status");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 17749LU),UA_NODEID_NUMERIC(ns[0], 17743LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "Status"),UA_NODEID_NUMERIC(ns[0], 14643LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_194_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17749LU));
}

/* State - ns=0;i=17750 */

static UA_StatusCode function_namespace0_generated_195_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 14647LU);
attr.displayName = UA_LOCALIZEDTEXT("", "State");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17750LU),UA_NODEID_NUMERIC(ns[0], 17749LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "State"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_195_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17750LU));
}

/* DataSetFieldContentMask - ns=0;i=17745 */

static UA_StatusCode function_namespace0_generated_196_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15583LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetFieldContentMask");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17745LU),UA_NODEID_NUMERIC(ns[0], 17743LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DataSetFieldContentMask"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_196_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17745LU));
}

/* DataSetWriterId - ns=0;i=17744 */

static UA_StatusCode function_namespace0_generated_197_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetWriterId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17744LU),UA_NODEID_NUMERIC(ns[0], 17743LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DataSetWriterId"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_197_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17744LU));
}

/* DataSetWriterProperties - ns=0;i=17490 */

static UA_StatusCode function_namespace0_generated_198_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 14533LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetWriterProperties");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17490LU),UA_NODEID_NUMERIC(ns[0], 17743LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DataSetWriterProperties"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_198_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17490LU));
}

/* LocaleIds - ns=0;i=17740 */

static UA_StatusCode function_namespace0_generated_199_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 295LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LocaleIds");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17740LU),UA_NODEID_NUMERIC(ns[0], 17725LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "LocaleIds"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_199_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17740LU));
}

/* Priority - ns=0;i=17739 */

static UA_StatusCode function_namespace0_generated_200_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Priority");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17739LU),UA_NODEID_NUMERIC(ns[0], 17725LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "Priority"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_200_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17739LU));
}

/* KeepAliveTime - ns=0;i=17738 */

static UA_StatusCode function_namespace0_generated_201_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "KeepAliveTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17738LU),UA_NODEID_NUMERIC(ns[0], 17725LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "KeepAliveTime"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_201_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17738LU));
}

/* PublishingInterval - ns=0;i=17737 */

static UA_StatusCode function_namespace0_generated_202_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishingInterval");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17737LU),UA_NODEID_NUMERIC(ns[0], 17725LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "PublishingInterval"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_202_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17737LU));
}

/* WriterGroupId - ns=0;i=17736 */

static UA_StatusCode function_namespace0_generated_203_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
attr.displayName = UA_LOCALIZEDTEXT("", "WriterGroupId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17736LU),UA_NODEID_NUMERIC(ns[0], 17725LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "WriterGroupId"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_203_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17736LU));
}

/* MaxNetworkMessageSize - ns=0;i=17724 */

static UA_StatusCode function_namespace0_generated_204_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNetworkMessageSize");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17724LU),UA_NODEID_NUMERIC(ns[0], 14232LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxNetworkMessageSize"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_204_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17724LU));
}

/* SecurityGroupId - ns=0;i=15927 */

static UA_StatusCode function_namespace0_generated_205_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityGroupId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 15927LU),UA_NODEID_NUMERIC(ns[0], 14232LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "SecurityGroupId"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_205_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15927LU));
}

/* Status - ns=0;i=15265 */

static UA_StatusCode function_namespace0_generated_206_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Status");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 15265LU),UA_NODEID_NUMERIC(ns[0], 14232LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "Status"),UA_NODEID_NUMERIC(ns[0], 14643LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_206_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15265LU));
}

/* State - ns=0;i=15266 */

static UA_StatusCode function_namespace0_generated_207_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 14647LU);
attr.displayName = UA_LOCALIZEDTEXT("", "State");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 15266LU),UA_NODEID_NUMERIC(ns[0], 15265LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "State"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_207_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15266LU));
}

/* ConnectionTransportType - ns=0;i=17721 */

static UA_StatusCode function_namespace0_generated_208_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ConnectionTransportType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 17721LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "ConnectionTransportType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_208_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17721LU));
}

/* NetworkAddressType - ns=0;i=21145 */

static UA_StatusCode function_namespace0_generated_209_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "NetworkAddressType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 21145LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "NetworkAddressType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_209_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21145LU));
}

/* NetworkAddressUrlType - ns=0;i=21147 */

static UA_StatusCode function_namespace0_generated_210_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NetworkAddressUrlType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 21147LU),UA_NODEID_NUMERIC(ns[0], 21145LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "NetworkAddressUrlType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_210_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21147LU));
}

/* Url - ns=0;i=21149 */

static UA_StatusCode function_namespace0_generated_211_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Url");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 21149LU),UA_NODEID_NUMERIC(ns[0], 21147LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "Url"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_211_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21149LU));
}

/* NetworkInterface - ns=0;i=21146 */

static UA_StatusCode function_namespace0_generated_212_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "NetworkInterface");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 21146LU),UA_NODEID_NUMERIC(ns[0], 21145LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "NetworkInterface"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_212_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 21146LU));
}

/* PubSubConnectionType - ns=0;i=14209 */

static UA_StatusCode function_namespace0_generated_213_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PubSubConnectionType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 14209LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "PubSubConnectionType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_213_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14209LU));
}

/* ConnectionProperties - ns=0;i=17485 */

static UA_StatusCode function_namespace0_generated_214_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 14533LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ConnectionProperties");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17485LU),UA_NODEID_NUMERIC(ns[0], 14209LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "ConnectionProperties"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_214_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17485LU));
}

/* AddReaderGroup - ns=0;i=17465 */

static UA_StatusCode function_namespace0_generated_215_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AddReaderGroup");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 17465LU),UA_NODEID_NUMERIC(ns[0], 14209LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddReaderGroup"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_215_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17465LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=17508 */

static UA_StatusCode function_namespace0_generated_216_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_17508_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_17508_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_17508_variant_DataContents[0].name = UA_STRING("GroupId");
variablenode_ns_0_i_17508_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_17508_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_17508_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17508LU),UA_NODEID_NUMERIC(ns[0], 17465LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "OutputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_216_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17508LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=17507 */

static UA_StatusCode function_namespace0_generated_217_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_17507_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_17507_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_17507_variant_DataContents[0].name = UA_STRING("Configuration");
variablenode_ns_0_i_17507_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15520LU);
variablenode_ns_0_i_17507_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_17507_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17507LU),UA_NODEID_NUMERIC(ns[0], 17465LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_217_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17507LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AddWriterGroup - ns=0;i=17427 */

static UA_StatusCode function_namespace0_generated_218_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AddWriterGroup");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 17427LU),UA_NODEID_NUMERIC(ns[0], 14209LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddWriterGroup"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_218_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17427LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=17456 */

static UA_StatusCode function_namespace0_generated_219_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_17456_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_17456_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_17456_variant_DataContents[0].name = UA_STRING("GroupId");
variablenode_ns_0_i_17456_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_17456_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_17456_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17456LU),UA_NODEID_NUMERIC(ns[0], 17427LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "OutputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_219_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17456LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=17428 */

static UA_StatusCode function_namespace0_generated_220_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_17428_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_17428_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_17428_variant_DataContents[0].name = UA_STRING("Configuration");
variablenode_ns_0_i_17428_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15480LU);
variablenode_ns_0_i_17428_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_17428_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17428LU),UA_NODEID_NUMERIC(ns[0], 17427LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_220_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17428LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* <ReaderGroupName> - ns=0;i=17325 */

static UA_StatusCode function_namespace0_generated_221_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<ReaderGroupName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 17325LU),UA_NODEID_NUMERIC(ns[0], 14209LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "<ReaderGroupName>"),UA_NODEID_NUMERIC(ns[0], 17999LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_221_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17325LU));
}

/* <WriterGroupName> - ns=0;i=17310 */

static UA_StatusCode function_namespace0_generated_222_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<WriterGroupName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 17310LU),UA_NODEID_NUMERIC(ns[0], 14209LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "<WriterGroupName>"),UA_NODEID_NUMERIC(ns[0], 17725LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_222_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17310LU));
}

/* TransportProfileUri - ns=0;i=17306 */

static UA_StatusCode function_namespace0_generated_223_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransportProfileUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17306LU),UA_NODEID_NUMERIC(ns[0], 14209LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TransportProfileUri"),UA_NODEID_NUMERIC(ns[0], 16309LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_223_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17306LU));
}

/* Selections - ns=0;i=17710 */

static UA_StatusCode function_namespace0_generated_224_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Selections");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17710LU),UA_NODEID_NUMERIC(ns[0], 17306LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "Selections"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_224_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17710LU));
}

/* TransportSettings - ns=0;i=17203 */

static UA_StatusCode function_namespace0_generated_225_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TransportSettings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 17203LU),UA_NODEID_NUMERIC(ns[0], 14209LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TransportSettings"),UA_NODEID_NUMERIC(ns[0], 17721LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_225_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17203LU));
}

/* Status - ns=0;i=14600 */

static UA_StatusCode function_namespace0_generated_226_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Status");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 14600LU),UA_NODEID_NUMERIC(ns[0], 14209LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "Status"),UA_NODEID_NUMERIC(ns[0], 14643LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_226_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14600LU));
}

/* State - ns=0;i=14601 */

static UA_StatusCode function_namespace0_generated_227_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 14647LU);
attr.displayName = UA_LOCALIZEDTEXT("", "State");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 14601LU),UA_NODEID_NUMERIC(ns[0], 14600LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "State"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_227_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14601LU));
}

/* PublisherId - ns=0;i=14595 */

static UA_StatusCode function_namespace0_generated_228_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublisherId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 14595LU),UA_NODEID_NUMERIC(ns[0], 14209LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "PublisherId"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_228_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14595LU));
}

/* RemoveGroup - ns=0;i=14225 */

static UA_StatusCode function_namespace0_generated_229_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RemoveGroup");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 14225LU),UA_NODEID_NUMERIC(ns[0], 14209LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RemoveGroup"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_229_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14225LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=14226 */

static UA_StatusCode function_namespace0_generated_230_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_14226_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_14226_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14226_variant_DataContents[0].name = UA_STRING("GroupId");
variablenode_ns_0_i_14226_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_14226_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_14226_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 14226LU),UA_NODEID_NUMERIC(ns[0], 14225LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_230_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14226LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Address - ns=0;i=14221 */

static UA_StatusCode function_namespace0_generated_231_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Address");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 14221LU),UA_NODEID_NUMERIC(ns[0], 14209LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "Address"),UA_NODEID_NUMERIC(ns[0], 21145LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_231_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14221LU));
}

/* NetworkInterface - ns=0;i=17202 */

static UA_StatusCode function_namespace0_generated_232_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "NetworkInterface");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17202LU),UA_NODEID_NUMERIC(ns[0], 14221LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "NetworkInterface"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_232_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17202LU));
}

/* PublishedDataSetType - ns=0;i=14509 */

static UA_StatusCode function_namespace0_generated_233_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PublishedDataSetType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 14509LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "PublishedDataSetType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_233_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14509LU));
}

/* DataSetClassId - ns=0;i=16759 */

static UA_StatusCode function_namespace0_generated_234_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 14LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetClassId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 16759LU),UA_NODEID_NUMERIC(ns[0], 14509LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DataSetClassId"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_234_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 16759LU));
}

/* DataSetMetaData - ns=0;i=15229 */

static UA_StatusCode function_namespace0_generated_235_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 14523LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetMetaData");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 15229LU),UA_NODEID_NUMERIC(ns[0], 14509LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DataSetMetaData"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_235_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15229LU));
}

/* PublishedDataItemsType - ns=0;i=14534 */

static UA_StatusCode function_namespace0_generated_236_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PublishedDataItemsType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 14534LU),UA_NODEID_NUMERIC(ns[0], 14509LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "PublishedDataItemsType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_236_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14534LU));
}

/* RemoveVariables - ns=0;i=14558 */

static UA_StatusCode function_namespace0_generated_237_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RemoveVariables");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 14558LU),UA_NODEID_NUMERIC(ns[0], 14534LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RemoveVariables"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_237_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14558LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=14560 */

static UA_StatusCode function_namespace0_generated_238_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_14560_variant_DataContents[2];

UA_init(&variablenode_ns_0_i_14560_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14560_variant_DataContents[0].name = UA_STRING("NewConfigurationVersion");
variablenode_ns_0_i_14560_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 14593LU);
variablenode_ns_0_i_14560_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_0_i_14560_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14560_variant_DataContents[1].name = UA_STRING("RemoveResults");
variablenode_ns_0_i_14560_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 19LU);
variablenode_ns_0_i_14560_variant_DataContents[1].valueRank = (UA_Int32) 1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_14560_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 14560LU),UA_NODEID_NUMERIC(ns[0], 14558LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "OutputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_238_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14560LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=14559 */

static UA_StatusCode function_namespace0_generated_239_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_14559_variant_DataContents[2];

UA_init(&variablenode_ns_0_i_14559_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14559_variant_DataContents[0].name = UA_STRING("ConfigurationVersion");
variablenode_ns_0_i_14559_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 14593LU);
variablenode_ns_0_i_14559_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_0_i_14559_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14559_variant_DataContents[1].name = UA_STRING("VariablesToRemove");
variablenode_ns_0_i_14559_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_0_i_14559_variant_DataContents[1].valueRank = (UA_Int32) 1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_14559_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 14559LU),UA_NODEID_NUMERIC(ns[0], 14558LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_239_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14559LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AddVariables - ns=0;i=14555 */

static UA_StatusCode function_namespace0_generated_240_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AddVariables");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 14555LU),UA_NODEID_NUMERIC(ns[0], 14534LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddVariables"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_240_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14555LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=14557 */

static UA_StatusCode function_namespace0_generated_241_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_14557_variant_DataContents[2];

UA_init(&variablenode_ns_0_i_14557_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14557_variant_DataContents[0].name = UA_STRING("NewConfigurationVersion");
variablenode_ns_0_i_14557_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 14593LU);
variablenode_ns_0_i_14557_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_0_i_14557_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14557_variant_DataContents[1].name = UA_STRING("AddResults");
variablenode_ns_0_i_14557_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 19LU);
variablenode_ns_0_i_14557_variant_DataContents[1].valueRank = (UA_Int32) 1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_14557_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 14557LU),UA_NODEID_NUMERIC(ns[0], 14555LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "OutputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_241_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14557LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=14556 */

static UA_StatusCode function_namespace0_generated_242_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_14556_variant_DataContents[4];

UA_init(&variablenode_ns_0_i_14556_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14556_variant_DataContents[0].name = UA_STRING("ConfigurationVersion");
variablenode_ns_0_i_14556_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 14593LU);
variablenode_ns_0_i_14556_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_0_i_14556_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14556_variant_DataContents[1].name = UA_STRING("FieldNameAliases");
variablenode_ns_0_i_14556_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_0_i_14556_variant_DataContents[1].valueRank = (UA_Int32) 1;

UA_init(&variablenode_ns_0_i_14556_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14556_variant_DataContents[2].name = UA_STRING("PromotedFields");
variablenode_ns_0_i_14556_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_0_i_14556_variant_DataContents[2].valueRank = (UA_Int32) 1;

UA_init(&variablenode_ns_0_i_14556_variant_DataContents[3], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14556_variant_DataContents[3].name = UA_STRING("VariablesToAdd");
variablenode_ns_0_i_14556_variant_DataContents[3].dataType = UA_NODEID_NUMERIC(ns[0], 14273LU);
variablenode_ns_0_i_14556_variant_DataContents[3].valueRank = (UA_Int32) 1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_14556_variant_DataContents, (UA_Int32) 4, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 14556LU),UA_NODEID_NUMERIC(ns[0], 14555LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);




return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_242_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14556LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* PublishedData - ns=0;i=14548 */

static UA_StatusCode function_namespace0_generated_243_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 14273LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishedData");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 14548LU),UA_NODEID_NUMERIC(ns[0], 14534LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "PublishedData"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_243_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14548LU));
}

/* ConfigurationVersion - ns=0;i=14519 */

static UA_StatusCode function_namespace0_generated_244_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 14593LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ConfigurationVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 14519LU),UA_NODEID_NUMERIC(ns[0], 14509LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "ConfigurationVersion"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_244_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14519LU));
}

/* DataSetFolderType - ns=0;i=14477 */

static UA_StatusCode function_namespace0_generated_245_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataSetFolderType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 14477LU),UA_NODEID_NUMERIC(ns[0], 61LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "DataSetFolderType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_245_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14477LU));
}

/* RemoveDataSetFolder - ns=0;i=16997 */

static UA_StatusCode function_namespace0_generated_246_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RemoveDataSetFolder");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 16997LU),UA_NODEID_NUMERIC(ns[0], 14477LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RemoveDataSetFolder"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_246_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 16997LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=17007 */

static UA_StatusCode function_namespace0_generated_247_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_17007_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_17007_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_17007_variant_DataContents[0].name = UA_STRING("DataSetFolderNodeId");
variablenode_ns_0_i_17007_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_17007_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_17007_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17007LU),UA_NODEID_NUMERIC(ns[0], 16997LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_247_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17007LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AddDataSetFolder - ns=0;i=16994 */

static UA_StatusCode function_namespace0_generated_248_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AddDataSetFolder");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 16994LU),UA_NODEID_NUMERIC(ns[0], 14477LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddDataSetFolder"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_248_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 16994LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=16996 */

static UA_StatusCode function_namespace0_generated_249_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_16996_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_16996_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_16996_variant_DataContents[0].name = UA_STRING("DataSetFolderNodeId");
variablenode_ns_0_i_16996_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_16996_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_16996_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 16996LU),UA_NODEID_NUMERIC(ns[0], 16994LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "OutputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_249_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 16996LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=16995 */

static UA_StatusCode function_namespace0_generated_250_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_16995_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_16995_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_16995_variant_DataContents[0].name = UA_STRING("Name");
variablenode_ns_0_i_16995_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_0_i_16995_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_16995_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 16995LU),UA_NODEID_NUMERIC(ns[0], 16994LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_250_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 16995LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* RemovePublishedDataSet - ns=0;i=14499 */

static UA_StatusCode function_namespace0_generated_251_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RemovePublishedDataSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 14499LU),UA_NODEID_NUMERIC(ns[0], 14477LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RemovePublishedDataSet"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_251_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14499LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=14500 */

static UA_StatusCode function_namespace0_generated_252_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_14500_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_14500_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14500_variant_DataContents[0].name = UA_STRING("DataSetNodeId");
variablenode_ns_0_i_14500_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_14500_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_14500_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 14500LU),UA_NODEID_NUMERIC(ns[0], 14499LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_252_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14500LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AddPublishedDataItems - ns=0;i=14493 */

static UA_StatusCode function_namespace0_generated_253_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AddPublishedDataItems");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 14493LU),UA_NODEID_NUMERIC(ns[0], 14477LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddPublishedDataItems"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_253_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14493LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=14495 */

static UA_StatusCode function_namespace0_generated_254_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_14495_variant_DataContents[3];

UA_init(&variablenode_ns_0_i_14495_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14495_variant_DataContents[0].name = UA_STRING("DataSetNodeId");
variablenode_ns_0_i_14495_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_14495_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_0_i_14495_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14495_variant_DataContents[1].name = UA_STRING("ConfigurationVersion");
variablenode_ns_0_i_14495_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 14593LU);
variablenode_ns_0_i_14495_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_0_i_14495_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14495_variant_DataContents[2].name = UA_STRING("AddResults");
variablenode_ns_0_i_14495_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 19LU);
variablenode_ns_0_i_14495_variant_DataContents[2].valueRank = (UA_Int32) 1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_14495_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 14495LU),UA_NODEID_NUMERIC(ns[0], 14493LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "OutputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);



return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_254_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14495LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=14494 */

static UA_StatusCode function_namespace0_generated_255_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_14494_variant_DataContents[4];

UA_init(&variablenode_ns_0_i_14494_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14494_variant_DataContents[0].name = UA_STRING("Name");
variablenode_ns_0_i_14494_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_0_i_14494_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_0_i_14494_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14494_variant_DataContents[1].name = UA_STRING("FieldNameAliases");
variablenode_ns_0_i_14494_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_0_i_14494_variant_DataContents[1].valueRank = (UA_Int32) 1;

UA_init(&variablenode_ns_0_i_14494_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14494_variant_DataContents[2].name = UA_STRING("FieldFlags");
variablenode_ns_0_i_14494_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 15904LU);
variablenode_ns_0_i_14494_variant_DataContents[2].valueRank = (UA_Int32) 1;

UA_init(&variablenode_ns_0_i_14494_variant_DataContents[3], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14494_variant_DataContents[3].name = UA_STRING("VariablesToAdd");
variablenode_ns_0_i_14494_variant_DataContents[3].dataType = UA_NODEID_NUMERIC(ns[0], 14273LU);
variablenode_ns_0_i_14494_variant_DataContents[3].valueRank = (UA_Int32) 1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_14494_variant_DataContents, (UA_Int32) 4, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 14494LU),UA_NODEID_NUMERIC(ns[0], 14493LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);




return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_255_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14494LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* <DataSetFolderName> - ns=0;i=14478 */

static UA_StatusCode function_namespace0_generated_256_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<DataSetFolderName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 14478LU),UA_NODEID_NUMERIC(ns[0], 14477LU),UA_NODEID_NUMERIC(ns[0], 35LU),UA_QUALIFIEDNAME(ns[0], "<DataSetFolderName>"),UA_NODEID_NUMERIC(ns[0], 14477LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_256_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14478LU));
}

/* PubSubKeyServiceType - ns=0;i=15906 */

static UA_StatusCode function_namespace0_generated_257_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PubSubKeyServiceType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 15906LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "PubSubKeyServiceType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_257_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15906LU));
}

/* PublishSubscribeType - ns=0;i=14416 */

static UA_StatusCode function_namespace0_generated_258_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PublishSubscribeType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 14416LU),UA_NODEID_NUMERIC(ns[0], 15906LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "PublishSubscribeType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_258_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14416LU));
}

/* DefaultDatagramPublisherId - ns=0;i=25432 */

static UA_StatusCode function_namespace0_generated_259_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 9LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultDatagramPublisherId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 25432LU),UA_NODEID_NUMERIC(ns[0], 14416LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DefaultDatagramPublisherId"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_259_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 25432LU));
}

/* SubscribedDataSets - ns=0;i=23622 */

static UA_StatusCode function_namespace0_generated_260_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SubscribedDataSets");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 23622LU),UA_NODEID_NUMERIC(ns[0], 14416LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SubscribedDataSets"),UA_NODEID_NUMERIC(ns[0], 23795LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_260_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23622LU));
}

/* SupportedTransportProfiles - ns=0;i=17479 */

static UA_StatusCode function_namespace0_generated_261_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SupportedTransportProfiles");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17479LU),UA_NODEID_NUMERIC(ns[0], 14416LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "SupportedTransportProfiles"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_261_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17479LU));
}

/* AddConnection - ns=0;i=16598 */

static UA_StatusCode function_namespace0_generated_262_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AddConnection");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 16598LU),UA_NODEID_NUMERIC(ns[0], 14416LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddConnection"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_262_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 16598LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=16600 */

static UA_StatusCode function_namespace0_generated_263_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_16600_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_16600_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_16600_variant_DataContents[0].name = UA_STRING("ConnectionId");
variablenode_ns_0_i_16600_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_16600_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_16600_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 16600LU),UA_NODEID_NUMERIC(ns[0], 16598LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "OutputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_263_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 16600LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=16599 */

static UA_StatusCode function_namespace0_generated_264_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_16599_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_16599_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_16599_variant_DataContents[0].name = UA_STRING("Configuration");
variablenode_ns_0_i_16599_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15617LU);
variablenode_ns_0_i_16599_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_16599_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 16599LU),UA_NODEID_NUMERIC(ns[0], 16598LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_264_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 16599LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Status - ns=0;i=15844 */

static UA_StatusCode function_namespace0_generated_265_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Status");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 15844LU),UA_NODEID_NUMERIC(ns[0], 14416LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "Status"),UA_NODEID_NUMERIC(ns[0], 14643LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_265_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15844LU));
}

/* State - ns=0;i=15845 */

static UA_StatusCode function_namespace0_generated_266_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 14647LU);
attr.displayName = UA_LOCALIZEDTEXT("", "State");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 15845LU),UA_NODEID_NUMERIC(ns[0], 15844LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "State"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_266_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15845LU));
}

/* PublishedDataSets - ns=0;i=14434 */

static UA_StatusCode function_namespace0_generated_267_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PublishedDataSets");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 14434LU),UA_NODEID_NUMERIC(ns[0], 14416LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "PublishedDataSets"),UA_NODEID_NUMERIC(ns[0], 14477LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_267_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14434LU));
}

/* RemoveConnection - ns=0;i=14432 */

static UA_StatusCode function_namespace0_generated_268_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RemoveConnection");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 14432LU),UA_NODEID_NUMERIC(ns[0], 14416LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RemoveConnection"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_268_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14432LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=14433 */

static UA_StatusCode function_namespace0_generated_269_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_14433_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_14433_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_14433_variant_DataContents[0].name = UA_STRING("ConnectionId");
variablenode_ns_0_i_14433_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_14433_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_14433_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 14433LU),UA_NODEID_NUMERIC(ns[0], 14432LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_269_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14433LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* <ConnectionName> - ns=0;i=14417 */

static UA_StatusCode function_namespace0_generated_270_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<ConnectionName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 14417LU),UA_NODEID_NUMERIC(ns[0], 14416LU),UA_NODEID_NUMERIC(ns[0], 14476LU),UA_QUALIFIEDNAME(ns[0], "<ConnectionName>"),UA_NODEID_NUMERIC(ns[0], 14209LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_270_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14417LU));
}

/* ConnectionProperties - ns=0;i=17478 */

static UA_StatusCode function_namespace0_generated_271_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 14533LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ConnectionProperties");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17478LU),UA_NODEID_NUMERIC(ns[0], 14417LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "ConnectionProperties"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_271_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17478LU));
}

/* TransportProfileUri - ns=0;i=17292 */

static UA_StatusCode function_namespace0_generated_272_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransportProfileUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17292LU),UA_NODEID_NUMERIC(ns[0], 14417LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TransportProfileUri"),UA_NODEID_NUMERIC(ns[0], 16309LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_272_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17292LU));
}

/* Selections - ns=0;i=17706 */

static UA_StatusCode function_namespace0_generated_273_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Selections");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17706LU),UA_NODEID_NUMERIC(ns[0], 17292LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "Selections"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_273_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17706LU));
}

/* Address - ns=0;i=14423 */

static UA_StatusCode function_namespace0_generated_274_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Address");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 14423LU),UA_NODEID_NUMERIC(ns[0], 14417LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "Address"),UA_NODEID_NUMERIC(ns[0], 21145LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_274_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14423LU));
}

/* NetworkInterface - ns=0;i=15533 */

static UA_StatusCode function_namespace0_generated_275_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "NetworkInterface");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 15533LU),UA_NODEID_NUMERIC(ns[0], 14423LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "NetworkInterface"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_275_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15533LU));
}

/* PublisherId - ns=0;i=14418 */

static UA_StatusCode function_namespace0_generated_276_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublisherId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 14418LU),UA_NODEID_NUMERIC(ns[0], 14417LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "PublisherId"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_276_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14418LU));
}

/* HistoryServerCapabilitiesType - ns=0;i=2330 */

static UA_StatusCode function_namespace0_generated_277_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HistoryServerCapabilitiesType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 2330LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "HistoryServerCapabilitiesType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_277_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2330LU));
}

/* EventQueueOverflowEventType - ns=0;i=3035 */

static UA_StatusCode function_namespace0_generated_278_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "EventQueueOverflowEventType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 3035LU),UA_NODEID_NUMERIC(ns[0], 2041LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "EventQueueOverflowEventType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_278_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3035LU));
}

/* Severity - ns=0;i=2051 */

static UA_StatusCode function_namespace0_generated_279_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Severity");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Indicates how urgent an event is.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2051LU),UA_NODEID_NUMERIC(ns[0], 2041LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "Severity"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_279_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2051LU));
}

/* Message - ns=0;i=2050 */

static UA_StatusCode function_namespace0_generated_280_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Message");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "A localized description of the event.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2050LU),UA_NODEID_NUMERIC(ns[0], 2041LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "Message"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_280_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2050LU));
}

/* LocalTime - ns=0;i=3190 */

static UA_StatusCode function_namespace0_generated_281_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 8912LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LocalTime");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Information about the local time where the event originated.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3190LU),UA_NODEID_NUMERIC(ns[0], 2041LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "LocalTime"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_281_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3190LU));
}

/* ReceiveTime - ns=0;i=2047 */

static UA_StatusCode function_namespace0_generated_282_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ReceiveTime");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "When the server received the event from the underlying system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2047LU),UA_NODEID_NUMERIC(ns[0], 2041LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "ReceiveTime"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_282_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2047LU));
}

/* Time - ns=0;i=2046 */

static UA_StatusCode function_namespace0_generated_283_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Time");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "When the event occurred.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2046LU),UA_NODEID_NUMERIC(ns[0], 2041LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "Time"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_283_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2046LU));
}

/* SourceName - ns=0;i=2045 */

static UA_StatusCode function_namespace0_generated_284_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SourceName");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "A description of the source of the event.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2045LU),UA_NODEID_NUMERIC(ns[0], 2041LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "SourceName"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_284_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2045LU));
}

/* SourceNode - ns=0;i=2044 */

static UA_StatusCode function_namespace0_generated_285_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SourceNode");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "The source of the event.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2044LU),UA_NODEID_NUMERIC(ns[0], 2041LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "SourceNode"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_285_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2044LU));
}

/* EventType - ns=0;i=2043 */

static UA_StatusCode function_namespace0_generated_286_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EventType");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "The identifier for the event type.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2043LU),UA_NODEID_NUMERIC(ns[0], 2041LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EventType"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_286_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2043LU));
}

/* EventId - ns=0;i=2042 */

static UA_StatusCode function_namespace0_generated_287_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EventId");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "A globally unique identifier for the event.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2042LU),UA_NODEID_NUMERIC(ns[0], 2041LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EventId"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_287_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2042LU));
}

/* SessionDiagnosticsVariableType - ns=0;i=2197 */

static UA_StatusCode function_namespace0_generated_288_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 865LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionDiagnosticsVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 63LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "SessionDiagnosticsVariableType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_288_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2197LU));
}

/* TotalRequestCount - ns=0;i=8900 */

static UA_StatusCode function_namespace0_generated_289_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TotalRequestCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 8900LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TotalRequestCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_289_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 8900LU));
}

/* MaxResponseMessageSize - ns=0;i=3050 */

static UA_StatusCode function_namespace0_generated_290_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxResponseMessageSize");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3050LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "MaxResponseMessageSize"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_290_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3050LU));
}

/* UnregisterNodesCount - ns=0;i=2731 */

static UA_StatusCode function_namespace0_generated_291_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UnregisterNodesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2731LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "UnregisterNodesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_291_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2731LU));
}

/* RegisterNodesCount - ns=0;i=2730 */

static UA_StatusCode function_namespace0_generated_292_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RegisterNodesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2730LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RegisterNodesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_292_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2730LU));
}

/* QueryNextCount - ns=0;i=2242 */

static UA_StatusCode function_namespace0_generated_293_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "QueryNextCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2242LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "QueryNextCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_293_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2242LU));
}

/* QueryFirstCount - ns=0;i=2241 */

static UA_StatusCode function_namespace0_generated_294_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "QueryFirstCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2241LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "QueryFirstCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_294_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2241LU));
}

/* TranslateBrowsePathsToNodeIdsCount - ns=0;i=2240 */

static UA_StatusCode function_namespace0_generated_295_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TranslateBrowsePathsToNodeIdsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2240LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TranslateBrowsePathsToNodeIdsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_295_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2240LU));
}

/* BrowseNextCount - ns=0;i=2239 */

static UA_StatusCode function_namespace0_generated_296_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "BrowseNextCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2239LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "BrowseNextCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_296_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2239LU));
}

/* BrowseCount - ns=0;i=2238 */

static UA_StatusCode function_namespace0_generated_297_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "BrowseCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2238LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "BrowseCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_297_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2238LU));
}

/* DeleteReferencesCount - ns=0;i=2237 */

static UA_StatusCode function_namespace0_generated_298_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteReferencesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2237LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DeleteReferencesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_298_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2237LU));
}

/* DeleteNodesCount - ns=0;i=2236 */

static UA_StatusCode function_namespace0_generated_299_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteNodesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2236LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DeleteNodesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_299_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2236LU));
}

/* AddReferencesCount - ns=0;i=2235 */

static UA_StatusCode function_namespace0_generated_300_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AddReferencesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2235LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddReferencesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_300_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2235LU));
}

/* AddNodesCount - ns=0;i=2234 */

static UA_StatusCode function_namespace0_generated_301_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AddNodesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2234LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddNodesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_301_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2234LU));
}

/* DeleteSubscriptionsCount - ns=0;i=2233 */

static UA_StatusCode function_namespace0_generated_302_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteSubscriptionsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2233LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DeleteSubscriptionsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_302_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2233LU));
}

/* TransferSubscriptionsCount - ns=0;i=2232 */

static UA_StatusCode function_namespace0_generated_303_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransferSubscriptionsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2232LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TransferSubscriptionsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_303_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2232LU));
}

/* RepublishCount - ns=0;i=2231 */

static UA_StatusCode function_namespace0_generated_304_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RepublishCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2231LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RepublishCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_304_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2231LU));
}

/* PublishCount - ns=0;i=2230 */

static UA_StatusCode function_namespace0_generated_305_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2230LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "PublishCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_305_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2230LU));
}

/* SetPublishingModeCount - ns=0;i=2229 */

static UA_StatusCode function_namespace0_generated_306_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SetPublishingModeCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2229LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SetPublishingModeCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_306_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2229LU));
}

/* ModifySubscriptionCount - ns=0;i=2228 */

static UA_StatusCode function_namespace0_generated_307_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ModifySubscriptionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2228LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ModifySubscriptionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_307_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2228LU));
}

/* CreateSubscriptionCount - ns=0;i=2227 */

static UA_StatusCode function_namespace0_generated_308_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CreateSubscriptionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2227LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CreateSubscriptionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_308_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2227LU));
}

/* DeleteMonitoredItemsCount - ns=0;i=2226 */

static UA_StatusCode function_namespace0_generated_309_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2226LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DeleteMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_309_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2226LU));
}

/* SetTriggeringCount - ns=0;i=2225 */

static UA_StatusCode function_namespace0_generated_310_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SetTriggeringCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2225LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SetTriggeringCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_310_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2225LU));
}

/* SetMonitoringModeCount - ns=0;i=2224 */

static UA_StatusCode function_namespace0_generated_311_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SetMonitoringModeCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2224LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SetMonitoringModeCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_311_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2224LU));
}

/* ModifyMonitoredItemsCount - ns=0;i=2223 */

static UA_StatusCode function_namespace0_generated_312_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ModifyMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2223LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ModifyMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_312_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2223LU));
}

/* CreateMonitoredItemsCount - ns=0;i=2222 */

static UA_StatusCode function_namespace0_generated_313_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CreateMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2222LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CreateMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_313_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2222LU));
}

/* CallCount - ns=0;i=2221 */

static UA_StatusCode function_namespace0_generated_314_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CallCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2221LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CallCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_314_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2221LU));
}

/* HistoryUpdateCount - ns=0;i=2220 */

static UA_StatusCode function_namespace0_generated_315_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HistoryUpdateCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2220LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "HistoryUpdateCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_315_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2220LU));
}

/* WriteCount - ns=0;i=2219 */

static UA_StatusCode function_namespace0_generated_316_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "WriteCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2219LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "WriteCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_316_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2219LU));
}

/* HistoryReadCount - ns=0;i=2218 */

static UA_StatusCode function_namespace0_generated_317_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HistoryReadCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2218LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "HistoryReadCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_317_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2218LU));
}

/* ReadCount - ns=0;i=2217 */

static UA_StatusCode function_namespace0_generated_318_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ReadCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2217LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ReadCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_318_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2217LU));
}

/* CurrentPublishRequestsInQueue - ns=0;i=2209 */

static UA_StatusCode function_namespace0_generated_319_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentPublishRequestsInQueue");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2209LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentPublishRequestsInQueue"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_319_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2209LU));
}

/* CurrentMonitoredItemsCount - ns=0;i=2208 */

static UA_StatusCode function_namespace0_generated_320_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2208LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_320_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2208LU));
}

/* CurrentSubscriptionsCount - ns=0;i=2207 */

static UA_StatusCode function_namespace0_generated_321_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSubscriptionsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2207LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentSubscriptionsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_321_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2207LU));
}

/* ClientLastContactTime - ns=0;i=2206 */

static UA_StatusCode function_namespace0_generated_322_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientLastContactTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2206LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientLastContactTime"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_322_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2206LU));
}

/* ClientConnectionTime - ns=0;i=2205 */

static UA_StatusCode function_namespace0_generated_323_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientConnectionTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2205LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientConnectionTime"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_323_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2205LU));
}

/* ActualSessionTimeout - ns=0;i=2204 */

static UA_StatusCode function_namespace0_generated_324_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ActualSessionTimeout");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2204LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ActualSessionTimeout"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_324_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2204LU));
}

/* LocaleIds - ns=0;i=2203 */

static UA_StatusCode function_namespace0_generated_325_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 295LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LocaleIds");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2203LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "LocaleIds"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_325_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2203LU));
}

/* EndpointUrl - ns=0;i=2202 */

static UA_StatusCode function_namespace0_generated_326_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EndpointUrl");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2202LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "EndpointUrl"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_326_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2202LU));
}

/* ServerUri - ns=0;i=2201 */

static UA_StatusCode function_namespace0_generated_327_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2201LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ServerUri"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_327_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2201LU));
}

/* ClientDescription - ns=0;i=2200 */

static UA_StatusCode function_namespace0_generated_328_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 308LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2200LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientDescription"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_328_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2200LU));
}

/* SessionName - ns=0;i=2199 */

static UA_StatusCode function_namespace0_generated_329_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2199LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionName"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_329_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2199LU));
}

/* SessionId - ns=0;i=2198 */

static UA_StatusCode function_namespace0_generated_330_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2198LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionId"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_330_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2198LU));
}

/* UnauthorizedRequestCount - ns=0;i=11892 */

static UA_StatusCode function_namespace0_generated_331_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UnauthorizedRequestCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11892LU),UA_NODEID_NUMERIC(ns[0], 2197LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "UnauthorizedRequestCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_331_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11892LU));
}

/* SubscriptionDiagnosticsType - ns=0;i=2172 */

static UA_StatusCode function_namespace0_generated_332_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 874LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SubscriptionDiagnosticsType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 63LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "SubscriptionDiagnosticsType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_332_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2172LU));
}

/* EventQueueOverflowCount - ns=0;i=8902 */

static UA_StatusCode function_namespace0_generated_333_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EventQueueOverflowCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 8902LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "EventQueueOverflowCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_333_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 8902LU));
}

/* NextSequenceNumber - ns=0;i=8897 */

static UA_StatusCode function_namespace0_generated_334_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "NextSequenceNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 8897LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "NextSequenceNumber"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_334_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 8897LU));
}

/* MonitoringQueueOverflowCount - ns=0;i=8896 */

static UA_StatusCode function_namespace0_generated_335_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MonitoringQueueOverflowCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 8896LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "MonitoringQueueOverflowCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_335_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 8896LU));
}

/* DisabledMonitoredItemCount - ns=0;i=8895 */

static UA_StatusCode function_namespace0_generated_336_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DisabledMonitoredItemCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 8895LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DisabledMonitoredItemCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_336_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 8895LU));
}

/* MonitoredItemCount - ns=0;i=8894 */

static UA_StatusCode function_namespace0_generated_337_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MonitoredItemCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 8894LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "MonitoredItemCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_337_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 8894LU));
}

/* DiscardedMessageCount - ns=0;i=8893 */

static UA_StatusCode function_namespace0_generated_338_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DiscardedMessageCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 8893LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DiscardedMessageCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_338_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 8893LU));
}

/* UnacknowledgedMessageCount - ns=0;i=8892 */

static UA_StatusCode function_namespace0_generated_339_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UnacknowledgedMessageCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 8892LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "UnacknowledgedMessageCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_339_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 8892LU));
}

/* CurrentLifetimeCount - ns=0;i=8891 */

static UA_StatusCode function_namespace0_generated_340_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentLifetimeCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 8891LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentLifetimeCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_340_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 8891LU));
}

/* CurrentKeepAliveCount - ns=0;i=8890 */

static UA_StatusCode function_namespace0_generated_341_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentKeepAliveCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 8890LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentKeepAliveCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_341_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 8890LU));
}

/* LatePublishRequestCount - ns=0;i=8889 */

static UA_StatusCode function_namespace0_generated_342_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LatePublishRequestCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 8889LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "LatePublishRequestCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_342_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 8889LU));
}

/* MaxLifetimeCount - ns=0;i=8888 */

static UA_StatusCode function_namespace0_generated_343_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxLifetimeCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 8888LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "MaxLifetimeCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_343_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 8888LU));
}

/* EventNotificationsCount - ns=0;i=2998 */

static UA_StatusCode function_namespace0_generated_344_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EventNotificationsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2998LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "EventNotificationsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_344_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2998LU));
}

/* NotificationsCount - ns=0;i=2193 */

static UA_StatusCode function_namespace0_generated_345_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "NotificationsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2193LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "NotificationsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_345_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2193LU));
}

/* DataChangeNotificationsCount - ns=0;i=2191 */

static UA_StatusCode function_namespace0_generated_346_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataChangeNotificationsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2191LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DataChangeNotificationsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_346_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2191LU));
}

/* PublishRequestCount - ns=0;i=2190 */

static UA_StatusCode function_namespace0_generated_347_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishRequestCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2190LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "PublishRequestCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_347_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2190LU));
}

/* TransferredToSameClientCount - ns=0;i=2189 */

static UA_StatusCode function_namespace0_generated_348_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransferredToSameClientCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2189LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TransferredToSameClientCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_348_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2189LU));
}

/* TransferredToAltClientCount - ns=0;i=2188 */

static UA_StatusCode function_namespace0_generated_349_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransferredToAltClientCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2188LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TransferredToAltClientCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_349_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2188LU));
}

/* TransferRequestCount - ns=0;i=2187 */

static UA_StatusCode function_namespace0_generated_350_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransferRequestCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2187LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TransferRequestCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_350_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2187LU));
}

/* RepublishMessageCount - ns=0;i=2186 */

static UA_StatusCode function_namespace0_generated_351_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RepublishMessageCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2186LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RepublishMessageCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_351_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2186LU));
}

/* RepublishMessageRequestCount - ns=0;i=2185 */

static UA_StatusCode function_namespace0_generated_352_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RepublishMessageRequestCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2185LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RepublishMessageRequestCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_352_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2185LU));
}

/* RepublishRequestCount - ns=0;i=2184 */

static UA_StatusCode function_namespace0_generated_353_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RepublishRequestCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2184LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RepublishRequestCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_353_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2184LU));
}

/* DisableCount - ns=0;i=2183 */

static UA_StatusCode function_namespace0_generated_354_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DisableCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2183LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DisableCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_354_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2183LU));
}

/* EnableCount - ns=0;i=2182 */

static UA_StatusCode function_namespace0_generated_355_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EnableCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2182LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "EnableCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_355_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2182LU));
}

/* ModifyCount - ns=0;i=2181 */

static UA_StatusCode function_namespace0_generated_356_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ModifyCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2181LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ModifyCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_356_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2181LU));
}

/* PublishingEnabled - ns=0;i=2180 */

static UA_StatusCode function_namespace0_generated_357_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishingEnabled");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2180LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "PublishingEnabled"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_357_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2180LU));
}

/* MaxNotificationsPerPublish - ns=0;i=2179 */

static UA_StatusCode function_namespace0_generated_358_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNotificationsPerPublish");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2179LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "MaxNotificationsPerPublish"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_358_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2179LU));
}

/* MaxKeepAliveCount - ns=0;i=2177 */

static UA_StatusCode function_namespace0_generated_359_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxKeepAliveCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2177LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "MaxKeepAliveCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_359_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2177LU));
}

/* PublishingInterval - ns=0;i=2176 */

static UA_StatusCode function_namespace0_generated_360_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishingInterval");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2176LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "PublishingInterval"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_360_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2176LU));
}

/* Priority - ns=0;i=2175 */

static UA_StatusCode function_namespace0_generated_361_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Priority");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2175LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "Priority"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_361_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2175LU));
}

/* SubscriptionId - ns=0;i=2174 */

static UA_StatusCode function_namespace0_generated_362_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SubscriptionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2174LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SubscriptionId"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_362_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2174LU));
}

/* SessionId - ns=0;i=2173 */

static UA_StatusCode function_namespace0_generated_363_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2173LU),UA_NODEID_NUMERIC(ns[0], 2172LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionId"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_363_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2173LU));
}

/* SubscriptionDiagnosticsArrayType - ns=0;i=2171 */

static UA_StatusCode function_namespace0_generated_364_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 874LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SubscriptionDiagnosticsArrayType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 2171LU),UA_NODEID_NUMERIC(ns[0], 63LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "SubscriptionDiagnosticsArrayType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_364_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2171LU));
}

/* SubscriptionDiagnostics - ns=0;i=12784 */

static UA_StatusCode function_namespace0_generated_365_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 874LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SubscriptionDiagnostics");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 2171LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SubscriptionDiagnostics"),UA_NODEID_NUMERIC(ns[0], 2172LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_365_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12784LU));
}

/* EventQueueOverflowCount - ns=0;i=12815 */

static UA_StatusCode function_namespace0_generated_366_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EventQueueOverflowCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12815LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "EventQueueOverflowCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_366_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12815LU));
}

/* NextSequenceNumber - ns=0;i=12814 */

static UA_StatusCode function_namespace0_generated_367_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "NextSequenceNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12814LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "NextSequenceNumber"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_367_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12814LU));
}

/* MonitoringQueueOverflowCount - ns=0;i=12813 */

static UA_StatusCode function_namespace0_generated_368_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MonitoringQueueOverflowCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12813LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "MonitoringQueueOverflowCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_368_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12813LU));
}

/* DisabledMonitoredItemCount - ns=0;i=12812 */

static UA_StatusCode function_namespace0_generated_369_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DisabledMonitoredItemCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12812LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DisabledMonitoredItemCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_369_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12812LU));
}

/* MonitoredItemCount - ns=0;i=12811 */

static UA_StatusCode function_namespace0_generated_370_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MonitoredItemCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12811LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "MonitoredItemCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_370_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12811LU));
}

/* DiscardedMessageCount - ns=0;i=12810 */

static UA_StatusCode function_namespace0_generated_371_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DiscardedMessageCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12810LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DiscardedMessageCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_371_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12810LU));
}

/* UnacknowledgedMessageCount - ns=0;i=12809 */

static UA_StatusCode function_namespace0_generated_372_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UnacknowledgedMessageCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12809LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "UnacknowledgedMessageCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_372_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12809LU));
}

/* CurrentLifetimeCount - ns=0;i=12808 */

static UA_StatusCode function_namespace0_generated_373_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentLifetimeCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12808LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentLifetimeCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_373_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12808LU));
}

/* CurrentKeepAliveCount - ns=0;i=12807 */

static UA_StatusCode function_namespace0_generated_374_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentKeepAliveCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12807LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentKeepAliveCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_374_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12807LU));
}

/* LatePublishRequestCount - ns=0;i=12806 */

static UA_StatusCode function_namespace0_generated_375_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LatePublishRequestCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12806LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "LatePublishRequestCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_375_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12806LU));
}

/* NotificationsCount - ns=0;i=12805 */

static UA_StatusCode function_namespace0_generated_376_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "NotificationsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12805LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "NotificationsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_376_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12805LU));
}

/* EventNotificationsCount - ns=0;i=12804 */

static UA_StatusCode function_namespace0_generated_377_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EventNotificationsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12804LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "EventNotificationsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_377_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12804LU));
}

/* DataChangeNotificationsCount - ns=0;i=12803 */

static UA_StatusCode function_namespace0_generated_378_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataChangeNotificationsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12803LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DataChangeNotificationsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_378_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12803LU));
}

/* PublishRequestCount - ns=0;i=12802 */

static UA_StatusCode function_namespace0_generated_379_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishRequestCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12802LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "PublishRequestCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_379_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12802LU));
}

/* TransferredToSameClientCount - ns=0;i=12801 */

static UA_StatusCode function_namespace0_generated_380_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransferredToSameClientCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12801LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TransferredToSameClientCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_380_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12801LU));
}

/* TransferredToAltClientCount - ns=0;i=12800 */

static UA_StatusCode function_namespace0_generated_381_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransferredToAltClientCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12800LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TransferredToAltClientCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_381_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12800LU));
}

/* TransferRequestCount - ns=0;i=12799 */

static UA_StatusCode function_namespace0_generated_382_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransferRequestCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12799LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TransferRequestCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_382_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12799LU));
}

/* RepublishMessageCount - ns=0;i=12798 */

static UA_StatusCode function_namespace0_generated_383_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RepublishMessageCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12798LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RepublishMessageCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_383_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12798LU));
}

/* RepublishMessageRequestCount - ns=0;i=12797 */

static UA_StatusCode function_namespace0_generated_384_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RepublishMessageRequestCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12797LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RepublishMessageRequestCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_384_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12797LU));
}

/* RepublishRequestCount - ns=0;i=12796 */

static UA_StatusCode function_namespace0_generated_385_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RepublishRequestCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12796LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RepublishRequestCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_385_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12796LU));
}

/* DisableCount - ns=0;i=12795 */

static UA_StatusCode function_namespace0_generated_386_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DisableCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12795LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DisableCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_386_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12795LU));
}

/* EnableCount - ns=0;i=12794 */

static UA_StatusCode function_namespace0_generated_387_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EnableCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12794LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "EnableCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_387_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12794LU));
}

/* ModifyCount - ns=0;i=12793 */

static UA_StatusCode function_namespace0_generated_388_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ModifyCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12793LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ModifyCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_388_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12793LU));
}

/* PublishingEnabled - ns=0;i=12792 */

static UA_StatusCode function_namespace0_generated_389_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishingEnabled");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12792LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "PublishingEnabled"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_389_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12792LU));
}

/* MaxNotificationsPerPublish - ns=0;i=12791 */

static UA_StatusCode function_namespace0_generated_390_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNotificationsPerPublish");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12791LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "MaxNotificationsPerPublish"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_390_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12791LU));
}

/* MaxLifetimeCount - ns=0;i=12790 */

static UA_StatusCode function_namespace0_generated_391_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxLifetimeCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12790LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "MaxLifetimeCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_391_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12790LU));
}

/* MaxKeepAliveCount - ns=0;i=12789 */

static UA_StatusCode function_namespace0_generated_392_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxKeepAliveCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12789LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "MaxKeepAliveCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_392_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12789LU));
}

/* PublishingInterval - ns=0;i=12788 */

static UA_StatusCode function_namespace0_generated_393_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishingInterval");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12788LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "PublishingInterval"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_393_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12788LU));
}

/* Priority - ns=0;i=12787 */

static UA_StatusCode function_namespace0_generated_394_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Priority");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12787LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "Priority"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_394_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12787LU));
}

/* SubscriptionId - ns=0;i=12786 */

static UA_StatusCode function_namespace0_generated_395_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SubscriptionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12786LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SubscriptionId"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_395_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12786LU));
}

/* SessionId - ns=0;i=12785 */

static UA_StatusCode function_namespace0_generated_396_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12785LU),UA_NODEID_NUMERIC(ns[0], 12784LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionId"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_396_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12785LU));
}

/* SessionSecurityDiagnosticsType - ns=0;i=2244 */

static UA_StatusCode function_namespace0_generated_397_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 868LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionSecurityDiagnosticsType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 2244LU),UA_NODEID_NUMERIC(ns[0], 63LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "SessionSecurityDiagnosticsType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_397_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2244LU));
}

/* ClientCertificate - ns=0;i=3058 */

static UA_StatusCode function_namespace0_generated_398_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientCertificate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3058LU),UA_NODEID_NUMERIC(ns[0], 2244LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientCertificate"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_398_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3058LU));
}

/* SecurityPolicyUri - ns=0;i=2252 */

static UA_StatusCode function_namespace0_generated_399_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityPolicyUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2252LU),UA_NODEID_NUMERIC(ns[0], 2244LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SecurityPolicyUri"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_399_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2252LU));
}

/* SecurityMode - ns=0;i=2251 */

static UA_StatusCode function_namespace0_generated_400_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 302LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityMode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2251LU),UA_NODEID_NUMERIC(ns[0], 2244LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SecurityMode"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_400_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2251LU));
}

/* TransportProtocol - ns=0;i=2250 */

static UA_StatusCode function_namespace0_generated_401_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransportProtocol");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2250LU),UA_NODEID_NUMERIC(ns[0], 2244LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TransportProtocol"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_401_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2250LU));
}

/* Encoding - ns=0;i=2249 */

static UA_StatusCode function_namespace0_generated_402_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Encoding");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2249LU),UA_NODEID_NUMERIC(ns[0], 2244LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "Encoding"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_402_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2249LU));
}

/* AuthenticationMechanism - ns=0;i=2248 */

static UA_StatusCode function_namespace0_generated_403_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AuthenticationMechanism");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2248LU),UA_NODEID_NUMERIC(ns[0], 2244LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AuthenticationMechanism"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_403_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2248LU));
}

/* ClientUserIdHistory - ns=0;i=2247 */

static UA_StatusCode function_namespace0_generated_404_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientUserIdHistory");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2247LU),UA_NODEID_NUMERIC(ns[0], 2244LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientUserIdHistory"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_404_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2247LU));
}

/* ClientUserIdOfSession - ns=0;i=2246 */

static UA_StatusCode function_namespace0_generated_405_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientUserIdOfSession");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2246LU),UA_NODEID_NUMERIC(ns[0], 2244LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientUserIdOfSession"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_405_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2246LU));
}

/* SessionId - ns=0;i=2245 */

static UA_StatusCode function_namespace0_generated_406_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2245LU),UA_NODEID_NUMERIC(ns[0], 2244LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionId"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_406_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2245LU));
}

/* SessionDiagnosticsObjectType - ns=0;i=2029 */

static UA_StatusCode function_namespace0_generated_407_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SessionDiagnosticsObjectType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 2029LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "SessionDiagnosticsObjectType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_407_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2029LU));
}

/* SubscriptionDiagnosticsArray - ns=0;i=2032 */

static UA_StatusCode function_namespace0_generated_408_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 874LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SubscriptionDiagnosticsArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2032LU),UA_NODEID_NUMERIC(ns[0], 2029LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SubscriptionDiagnosticsArray"),UA_NODEID_NUMERIC(ns[0], 2171LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_408_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2032LU));
}

/* SessionSecurityDiagnostics - ns=0;i=2031 */

static UA_StatusCode function_namespace0_generated_409_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 868LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionSecurityDiagnostics");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2031LU),UA_NODEID_NUMERIC(ns[0], 2029LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionSecurityDiagnostics"),UA_NODEID_NUMERIC(ns[0], 2244LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_409_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2031LU));
}

/* ClientCertificate - ns=0;i=3187 */

static UA_StatusCode function_namespace0_generated_410_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientCertificate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3187LU),UA_NODEID_NUMERIC(ns[0], 2031LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientCertificate"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_410_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3187LU));
}

/* SecurityPolicyUri - ns=0;i=3186 */

static UA_StatusCode function_namespace0_generated_411_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityPolicyUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3186LU),UA_NODEID_NUMERIC(ns[0], 2031LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SecurityPolicyUri"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_411_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3186LU));
}

/* SecurityMode - ns=0;i=3185 */

static UA_StatusCode function_namespace0_generated_412_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 302LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityMode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3185LU),UA_NODEID_NUMERIC(ns[0], 2031LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SecurityMode"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_412_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3185LU));
}

/* TransportProtocol - ns=0;i=3184 */

static UA_StatusCode function_namespace0_generated_413_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransportProtocol");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3184LU),UA_NODEID_NUMERIC(ns[0], 2031LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TransportProtocol"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_413_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3184LU));
}

/* Encoding - ns=0;i=3183 */

static UA_StatusCode function_namespace0_generated_414_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Encoding");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3183LU),UA_NODEID_NUMERIC(ns[0], 2031LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "Encoding"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_414_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3183LU));
}

/* AuthenticationMechanism - ns=0;i=3182 */

static UA_StatusCode function_namespace0_generated_415_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AuthenticationMechanism");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3182LU),UA_NODEID_NUMERIC(ns[0], 2031LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AuthenticationMechanism"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_415_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3182LU));
}

/* ClientUserIdHistory - ns=0;i=3181 */

static UA_StatusCode function_namespace0_generated_416_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientUserIdHistory");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3181LU),UA_NODEID_NUMERIC(ns[0], 2031LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientUserIdHistory"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_416_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3181LU));
}

/* ClientUserIdOfSession - ns=0;i=3180 */

static UA_StatusCode function_namespace0_generated_417_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientUserIdOfSession");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3180LU),UA_NODEID_NUMERIC(ns[0], 2031LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientUserIdOfSession"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_417_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3180LU));
}

/* SessionId - ns=0;i=3179 */

static UA_StatusCode function_namespace0_generated_418_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3179LU),UA_NODEID_NUMERIC(ns[0], 2031LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionId"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_418_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3179LU));
}

/* SessionDiagnostics - ns=0;i=2030 */

static UA_StatusCode function_namespace0_generated_419_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 865LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionDiagnostics");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 2029LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionDiagnostics"),UA_NODEID_NUMERIC(ns[0], 2197LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_419_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2030LU));
}

/* TotalRequestCount - ns=0;i=8898 */

static UA_StatusCode function_namespace0_generated_420_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TotalRequestCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 8898LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TotalRequestCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_420_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 8898LU));
}

/* UnregisterNodesCount - ns=0;i=3178 */

static UA_StatusCode function_namespace0_generated_421_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UnregisterNodesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3178LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "UnregisterNodesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_421_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3178LU));
}

/* RegisterNodesCount - ns=0;i=3177 */

static UA_StatusCode function_namespace0_generated_422_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RegisterNodesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3177LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RegisterNodesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_422_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3177LU));
}

/* QueryNextCount - ns=0;i=3176 */

static UA_StatusCode function_namespace0_generated_423_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "QueryNextCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3176LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "QueryNextCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_423_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3176LU));
}

/* QueryFirstCount - ns=0;i=3175 */

static UA_StatusCode function_namespace0_generated_424_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "QueryFirstCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3175LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "QueryFirstCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_424_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3175LU));
}

/* TranslateBrowsePathsToNodeIdsCount - ns=0;i=3174 */

static UA_StatusCode function_namespace0_generated_425_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TranslateBrowsePathsToNodeIdsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3174LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TranslateBrowsePathsToNodeIdsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_425_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3174LU));
}

/* BrowseNextCount - ns=0;i=3173 */

static UA_StatusCode function_namespace0_generated_426_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "BrowseNextCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3173LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "BrowseNextCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_426_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3173LU));
}

/* BrowseCount - ns=0;i=3172 */

static UA_StatusCode function_namespace0_generated_427_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "BrowseCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3172LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "BrowseCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_427_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3172LU));
}

/* DeleteReferencesCount - ns=0;i=3171 */

static UA_StatusCode function_namespace0_generated_428_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteReferencesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3171LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DeleteReferencesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_428_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3171LU));
}

/* DeleteNodesCount - ns=0;i=3170 */

static UA_StatusCode function_namespace0_generated_429_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteNodesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3170LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DeleteNodesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_429_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3170LU));
}

/* AddReferencesCount - ns=0;i=3169 */

static UA_StatusCode function_namespace0_generated_430_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AddReferencesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3169LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddReferencesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_430_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3169LU));
}

/* AddNodesCount - ns=0;i=3168 */

static UA_StatusCode function_namespace0_generated_431_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AddNodesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3168LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddNodesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_431_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3168LU));
}

/* DeleteSubscriptionsCount - ns=0;i=3167 */

static UA_StatusCode function_namespace0_generated_432_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteSubscriptionsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3167LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DeleteSubscriptionsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_432_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3167LU));
}

/* TransferSubscriptionsCount - ns=0;i=3166 */

static UA_StatusCode function_namespace0_generated_433_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransferSubscriptionsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3166LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TransferSubscriptionsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_433_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3166LU));
}

/* RepublishCount - ns=0;i=3165 */

static UA_StatusCode function_namespace0_generated_434_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RepublishCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3165LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RepublishCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_434_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3165LU));
}

/* PublishCount - ns=0;i=3164 */

static UA_StatusCode function_namespace0_generated_435_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3164LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "PublishCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_435_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3164LU));
}

/* SetPublishingModeCount - ns=0;i=3163 */

static UA_StatusCode function_namespace0_generated_436_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SetPublishingModeCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3163LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SetPublishingModeCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_436_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3163LU));
}

/* ModifySubscriptionCount - ns=0;i=3162 */

static UA_StatusCode function_namespace0_generated_437_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ModifySubscriptionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3162LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ModifySubscriptionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_437_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3162LU));
}

/* CreateSubscriptionCount - ns=0;i=3161 */

static UA_StatusCode function_namespace0_generated_438_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CreateSubscriptionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3161LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CreateSubscriptionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_438_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3161LU));
}

/* DeleteMonitoredItemsCount - ns=0;i=3160 */

static UA_StatusCode function_namespace0_generated_439_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3160LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DeleteMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_439_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3160LU));
}

/* SetTriggeringCount - ns=0;i=3159 */

static UA_StatusCode function_namespace0_generated_440_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SetTriggeringCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3159LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SetTriggeringCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_440_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3159LU));
}

/* SetMonitoringModeCount - ns=0;i=3158 */

static UA_StatusCode function_namespace0_generated_441_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SetMonitoringModeCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3158LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SetMonitoringModeCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_441_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3158LU));
}

/* ModifyMonitoredItemsCount - ns=0;i=3157 */

static UA_StatusCode function_namespace0_generated_442_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ModifyMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3157LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ModifyMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_442_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3157LU));
}

/* CreateMonitoredItemsCount - ns=0;i=3156 */

static UA_StatusCode function_namespace0_generated_443_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CreateMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3156LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CreateMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_443_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3156LU));
}

/* CallCount - ns=0;i=3155 */

static UA_StatusCode function_namespace0_generated_444_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CallCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3155LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CallCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_444_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3155LU));
}

/* HistoryUpdateCount - ns=0;i=3154 */

static UA_StatusCode function_namespace0_generated_445_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HistoryUpdateCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3154LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "HistoryUpdateCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_445_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3154LU));
}

/* WriteCount - ns=0;i=3153 */

static UA_StatusCode function_namespace0_generated_446_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "WriteCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3153LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "WriteCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_446_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3153LU));
}

/* HistoryReadCount - ns=0;i=3152 */

static UA_StatusCode function_namespace0_generated_447_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HistoryReadCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3152LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "HistoryReadCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_447_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3152LU));
}

/* ReadCount - ns=0;i=3151 */

static UA_StatusCode function_namespace0_generated_448_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ReadCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3151LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ReadCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_448_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3151LU));
}

/* CurrentPublishRequestsInQueue - ns=0;i=3143 */

static UA_StatusCode function_namespace0_generated_449_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentPublishRequestsInQueue");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3143LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentPublishRequestsInQueue"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_449_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3143LU));
}

/* CurrentMonitoredItemsCount - ns=0;i=3142 */

static UA_StatusCode function_namespace0_generated_450_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3142LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_450_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3142LU));
}

/* CurrentSubscriptionsCount - ns=0;i=3141 */

static UA_StatusCode function_namespace0_generated_451_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSubscriptionsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3141LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentSubscriptionsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_451_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3141LU));
}

/* ClientLastContactTime - ns=0;i=3140 */

static UA_StatusCode function_namespace0_generated_452_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientLastContactTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3140LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientLastContactTime"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_452_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3140LU));
}

/* ClientConnectionTime - ns=0;i=3139 */

static UA_StatusCode function_namespace0_generated_453_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientConnectionTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3139LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientConnectionTime"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_453_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3139LU));
}

/* MaxResponseMessageSize - ns=0;i=3138 */

static UA_StatusCode function_namespace0_generated_454_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxResponseMessageSize");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3138LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "MaxResponseMessageSize"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_454_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3138LU));
}

/* ActualSessionTimeout - ns=0;i=3137 */

static UA_StatusCode function_namespace0_generated_455_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ActualSessionTimeout");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3137LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ActualSessionTimeout"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_455_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3137LU));
}

/* LocaleIds - ns=0;i=3136 */

static UA_StatusCode function_namespace0_generated_456_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 295LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LocaleIds");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3136LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "LocaleIds"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_456_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3136LU));
}

/* EndpointUrl - ns=0;i=3135 */

static UA_StatusCode function_namespace0_generated_457_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EndpointUrl");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3135LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "EndpointUrl"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_457_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3135LU));
}

/* ServerUri - ns=0;i=3134 */

static UA_StatusCode function_namespace0_generated_458_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3134LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ServerUri"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_458_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3134LU));
}

/* ClientDescription - ns=0;i=3133 */

static UA_StatusCode function_namespace0_generated_459_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 308LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3133LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientDescription"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_459_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3133LU));
}

/* SessionName - ns=0;i=3132 */

static UA_StatusCode function_namespace0_generated_460_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3132LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionName"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_460_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3132LU));
}

/* SessionId - ns=0;i=3131 */

static UA_StatusCode function_namespace0_generated_461_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3131LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionId"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_461_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3131LU));
}

/* UnauthorizedRequestCount - ns=0;i=11891 */

static UA_StatusCode function_namespace0_generated_462_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UnauthorizedRequestCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11891LU),UA_NODEID_NUMERIC(ns[0], 2030LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "UnauthorizedRequestCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_462_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11891LU));
}

/* ServerDiagnosticsSummaryType - ns=0;i=2150 */

static UA_StatusCode function_namespace0_generated_463_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 859LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsSummaryType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 2150LU),UA_NODEID_NUMERIC(ns[0], 63LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsSummaryType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_463_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2150LU));
}

/* RejectedRequestsCount - ns=0;i=2163 */

static UA_StatusCode function_namespace0_generated_464_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RejectedRequestsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2163LU),UA_NODEID_NUMERIC(ns[0], 2150LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RejectedRequestsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_464_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2163LU));
}

/* SecurityRejectedRequestsCount - ns=0;i=2162 */

static UA_StatusCode function_namespace0_generated_465_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityRejectedRequestsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2162LU),UA_NODEID_NUMERIC(ns[0], 2150LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SecurityRejectedRequestsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_465_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2162LU));
}

/* CumulatedSubscriptionCount - ns=0;i=2161 */

static UA_StatusCode function_namespace0_generated_466_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CumulatedSubscriptionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2161LU),UA_NODEID_NUMERIC(ns[0], 2150LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CumulatedSubscriptionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_466_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2161LU));
}

/* CurrentSubscriptionCount - ns=0;i=2160 */

static UA_StatusCode function_namespace0_generated_467_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSubscriptionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2160LU),UA_NODEID_NUMERIC(ns[0], 2150LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentSubscriptionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_467_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2160LU));
}

/* PublishingIntervalCount - ns=0;i=2159 */

static UA_StatusCode function_namespace0_generated_468_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishingIntervalCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2159LU),UA_NODEID_NUMERIC(ns[0], 2150LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "PublishingIntervalCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_468_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2159LU));
}

/* SessionAbortCount - ns=0;i=2157 */

static UA_StatusCode function_namespace0_generated_469_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionAbortCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2157LU),UA_NODEID_NUMERIC(ns[0], 2150LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionAbortCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_469_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2157LU));
}

/* SessionTimeoutCount - ns=0;i=2156 */

static UA_StatusCode function_namespace0_generated_470_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionTimeoutCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2156LU),UA_NODEID_NUMERIC(ns[0], 2150LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionTimeoutCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_470_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2156LU));
}

/* RejectedSessionCount - ns=0;i=2155 */

static UA_StatusCode function_namespace0_generated_471_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RejectedSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2155LU),UA_NODEID_NUMERIC(ns[0], 2150LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RejectedSessionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_471_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2155LU));
}

/* SecurityRejectedSessionCount - ns=0;i=2154 */

static UA_StatusCode function_namespace0_generated_472_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityRejectedSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2154LU),UA_NODEID_NUMERIC(ns[0], 2150LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SecurityRejectedSessionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_472_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2154LU));
}

/* CumulatedSessionCount - ns=0;i=2153 */

static UA_StatusCode function_namespace0_generated_473_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CumulatedSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2153LU),UA_NODEID_NUMERIC(ns[0], 2150LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CumulatedSessionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_473_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2153LU));
}

/* CurrentSessionCount - ns=0;i=2152 */

static UA_StatusCode function_namespace0_generated_474_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2152LU),UA_NODEID_NUMERIC(ns[0], 2150LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentSessionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_474_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2152LU));
}

/* ServerViewCount - ns=0;i=2151 */

static UA_StatusCode function_namespace0_generated_475_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerViewCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2151LU),UA_NODEID_NUMERIC(ns[0], 2150LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ServerViewCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_475_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2151LU));
}

/* SamplingIntervalDiagnosticsType - ns=0;i=2165 */

static UA_StatusCode function_namespace0_generated_476_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 856LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SamplingIntervalDiagnosticsType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 2165LU),UA_NODEID_NUMERIC(ns[0], 63LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "SamplingIntervalDiagnosticsType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_476_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2165LU));
}

/* SamplingInterval - ns=0;i=2166 */

static UA_StatusCode function_namespace0_generated_477_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SamplingInterval");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2166LU),UA_NODEID_NUMERIC(ns[0], 2165LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SamplingInterval"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_477_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2166LU));
}

/* DisabledMonitoredItemsSamplingCount - ns=0;i=11699 */

static UA_StatusCode function_namespace0_generated_478_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DisabledMonitoredItemsSamplingCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11699LU),UA_NODEID_NUMERIC(ns[0], 2165LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DisabledMonitoredItemsSamplingCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_478_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11699LU));
}

/* MaxSampledMonitoredItemsCount - ns=0;i=11698 */

static UA_StatusCode function_namespace0_generated_479_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxSampledMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11698LU),UA_NODEID_NUMERIC(ns[0], 2165LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "MaxSampledMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_479_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11698LU));
}

/* SampledMonitoredItemsCount - ns=0;i=11697 */

static UA_StatusCode function_namespace0_generated_480_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SampledMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11697LU),UA_NODEID_NUMERIC(ns[0], 2165LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SampledMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_480_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11697LU));
}

/* SamplingIntervalDiagnosticsArrayType - ns=0;i=2164 */

static UA_StatusCode function_namespace0_generated_481_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 856LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SamplingIntervalDiagnosticsArrayType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 2164LU),UA_NODEID_NUMERIC(ns[0], 63LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "SamplingIntervalDiagnosticsArrayType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_481_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2164LU));
}

/* SamplingIntervalDiagnostics - ns=0;i=12779 */

static UA_StatusCode function_namespace0_generated_482_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 856LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SamplingIntervalDiagnostics");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12779LU),UA_NODEID_NUMERIC(ns[0], 2164LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SamplingIntervalDiagnostics"),UA_NODEID_NUMERIC(ns[0], 2165LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_482_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12779LU));
}

/* DisabledMonitoredItemsSamplingCount - ns=0;i=12783 */

static UA_StatusCode function_namespace0_generated_483_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DisabledMonitoredItemsSamplingCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12783LU),UA_NODEID_NUMERIC(ns[0], 12779LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DisabledMonitoredItemsSamplingCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_483_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12783LU));
}

/* MaxSampledMonitoredItemsCount - ns=0;i=12782 */

static UA_StatusCode function_namespace0_generated_484_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxSampledMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12782LU),UA_NODEID_NUMERIC(ns[0], 12779LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "MaxSampledMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_484_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12782LU));
}

/* SampledMonitoredItemsCount - ns=0;i=12781 */

static UA_StatusCode function_namespace0_generated_485_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SampledMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12781LU),UA_NODEID_NUMERIC(ns[0], 12779LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SampledMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_485_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12781LU));
}

/* SamplingInterval - ns=0;i=12780 */

static UA_StatusCode function_namespace0_generated_486_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SamplingInterval");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12780LU),UA_NODEID_NUMERIC(ns[0], 12779LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SamplingInterval"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_486_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12780LU));
}

/* SessionDiagnosticsArrayType - ns=0;i=2196 */

static UA_StatusCode function_namespace0_generated_487_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 865LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionDiagnosticsArrayType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 2196LU),UA_NODEID_NUMERIC(ns[0], 63LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "SessionDiagnosticsArrayType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_487_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2196LU));
}

/* SessionDiagnostics - ns=0;i=12816 */

static UA_StatusCode function_namespace0_generated_488_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 865LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionDiagnostics");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 2196LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionDiagnostics"),UA_NODEID_NUMERIC(ns[0], 2197LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_488_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12816LU));
}

/* UnregisterNodesCount - ns=0;i=12859 */

static UA_StatusCode function_namespace0_generated_489_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UnregisterNodesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12859LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "UnregisterNodesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_489_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12859LU));
}

/* RegisterNodesCount - ns=0;i=12858 */

static UA_StatusCode function_namespace0_generated_490_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RegisterNodesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12858LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RegisterNodesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_490_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12858LU));
}

/* QueryNextCount - ns=0;i=12857 */

static UA_StatusCode function_namespace0_generated_491_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "QueryNextCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12857LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "QueryNextCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_491_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12857LU));
}

/* QueryFirstCount - ns=0;i=12856 */

static UA_StatusCode function_namespace0_generated_492_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "QueryFirstCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12856LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "QueryFirstCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_492_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12856LU));
}

/* TranslateBrowsePathsToNodeIdsCount - ns=0;i=12855 */

static UA_StatusCode function_namespace0_generated_493_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TranslateBrowsePathsToNodeIdsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12855LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TranslateBrowsePathsToNodeIdsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_493_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12855LU));
}

/* BrowseNextCount - ns=0;i=12854 */

static UA_StatusCode function_namespace0_generated_494_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "BrowseNextCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12854LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "BrowseNextCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_494_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12854LU));
}

/* BrowseCount - ns=0;i=12853 */

static UA_StatusCode function_namespace0_generated_495_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "BrowseCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12853LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "BrowseCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_495_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12853LU));
}

/* DeleteReferencesCount - ns=0;i=12852 */

static UA_StatusCode function_namespace0_generated_496_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteReferencesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12852LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DeleteReferencesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_496_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12852LU));
}

/* DeleteNodesCount - ns=0;i=12851 */

static UA_StatusCode function_namespace0_generated_497_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteNodesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12851LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DeleteNodesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_497_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12851LU));
}

/* AddReferencesCount - ns=0;i=12850 */

static UA_StatusCode function_namespace0_generated_498_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AddReferencesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12850LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddReferencesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_498_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12850LU));
}

/* AddNodesCount - ns=0;i=12849 */

static UA_StatusCode function_namespace0_generated_499_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AddNodesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12849LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddNodesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_499_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12849LU));
}

/* DeleteSubscriptionsCount - ns=0;i=12848 */

static UA_StatusCode function_namespace0_generated_500_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteSubscriptionsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12848LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DeleteSubscriptionsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_500_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12848LU));
}

/* TransferSubscriptionsCount - ns=0;i=12847 */

static UA_StatusCode function_namespace0_generated_501_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransferSubscriptionsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12847LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TransferSubscriptionsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_501_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12847LU));
}

/* RepublishCount - ns=0;i=12846 */

static UA_StatusCode function_namespace0_generated_502_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RepublishCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12846LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RepublishCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_502_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12846LU));
}

/* PublishCount - ns=0;i=12845 */

static UA_StatusCode function_namespace0_generated_503_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12845LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "PublishCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_503_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12845LU));
}

/* SetPublishingModeCount - ns=0;i=12844 */

static UA_StatusCode function_namespace0_generated_504_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SetPublishingModeCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12844LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SetPublishingModeCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_504_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12844LU));
}

/* ModifySubscriptionCount - ns=0;i=12843 */

static UA_StatusCode function_namespace0_generated_505_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ModifySubscriptionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12843LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ModifySubscriptionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_505_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12843LU));
}

/* CreateSubscriptionCount - ns=0;i=12842 */

static UA_StatusCode function_namespace0_generated_506_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CreateSubscriptionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12842LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CreateSubscriptionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_506_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12842LU));
}

/* DeleteMonitoredItemsCount - ns=0;i=12841 */

static UA_StatusCode function_namespace0_generated_507_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12841LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DeleteMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_507_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12841LU));
}

/* SetTriggeringCount - ns=0;i=12840 */

static UA_StatusCode function_namespace0_generated_508_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SetTriggeringCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12840LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SetTriggeringCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_508_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12840LU));
}

/* SetMonitoringModeCount - ns=0;i=12839 */

static UA_StatusCode function_namespace0_generated_509_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SetMonitoringModeCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12839LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SetMonitoringModeCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_509_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12839LU));
}

/* ModifyMonitoredItemsCount - ns=0;i=12838 */

static UA_StatusCode function_namespace0_generated_510_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ModifyMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12838LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ModifyMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_510_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12838LU));
}

/* CreateMonitoredItemsCount - ns=0;i=12837 */

static UA_StatusCode function_namespace0_generated_511_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CreateMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12837LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CreateMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_511_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12837LU));
}

/* CallCount - ns=0;i=12836 */

static UA_StatusCode function_namespace0_generated_512_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CallCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12836LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CallCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_512_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12836LU));
}

/* HistoryUpdateCount - ns=0;i=12835 */

static UA_StatusCode function_namespace0_generated_513_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HistoryUpdateCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12835LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "HistoryUpdateCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_513_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12835LU));
}

/* WriteCount - ns=0;i=12834 */

static UA_StatusCode function_namespace0_generated_514_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "WriteCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12834LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "WriteCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_514_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12834LU));
}

/* HistoryReadCount - ns=0;i=12833 */

static UA_StatusCode function_namespace0_generated_515_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HistoryReadCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12833LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "HistoryReadCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_515_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12833LU));
}

/* ReadCount - ns=0;i=12832 */

static UA_StatusCode function_namespace0_generated_516_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ReadCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12832LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ReadCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_516_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12832LU));
}

/* UnauthorizedRequestCount - ns=0;i=12831 */

static UA_StatusCode function_namespace0_generated_517_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UnauthorizedRequestCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12831LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "UnauthorizedRequestCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_517_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12831LU));
}

/* TotalRequestCount - ns=0;i=12830 */

static UA_StatusCode function_namespace0_generated_518_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TotalRequestCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12830LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TotalRequestCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_518_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12830LU));
}

/* CurrentPublishRequestsInQueue - ns=0;i=12829 */

static UA_StatusCode function_namespace0_generated_519_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentPublishRequestsInQueue");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12829LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentPublishRequestsInQueue"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_519_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12829LU));
}

/* CurrentMonitoredItemsCount - ns=0;i=12828 */

static UA_StatusCode function_namespace0_generated_520_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12828LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_520_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12828LU));
}

/* CurrentSubscriptionsCount - ns=0;i=12827 */

static UA_StatusCode function_namespace0_generated_521_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSubscriptionsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12827LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentSubscriptionsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_521_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12827LU));
}

/* ClientLastContactTime - ns=0;i=12826 */

static UA_StatusCode function_namespace0_generated_522_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientLastContactTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12826LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientLastContactTime"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_522_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12826LU));
}

/* ClientConnectionTime - ns=0;i=12825 */

static UA_StatusCode function_namespace0_generated_523_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientConnectionTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12825LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientConnectionTime"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_523_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12825LU));
}

/* MaxResponseMessageSize - ns=0;i=12824 */

static UA_StatusCode function_namespace0_generated_524_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxResponseMessageSize");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12824LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "MaxResponseMessageSize"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_524_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12824LU));
}

/* ActualSessionTimeout - ns=0;i=12823 */

static UA_StatusCode function_namespace0_generated_525_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ActualSessionTimeout");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12823LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ActualSessionTimeout"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_525_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12823LU));
}

/* LocaleIds - ns=0;i=12822 */

static UA_StatusCode function_namespace0_generated_526_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 295LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LocaleIds");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12822LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "LocaleIds"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_526_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12822LU));
}

/* EndpointUrl - ns=0;i=12821 */

static UA_StatusCode function_namespace0_generated_527_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EndpointUrl");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12821LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "EndpointUrl"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_527_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12821LU));
}

/* ServerUri - ns=0;i=12820 */

static UA_StatusCode function_namespace0_generated_528_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12820LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ServerUri"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_528_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12820LU));
}

/* ClientDescription - ns=0;i=12819 */

static UA_StatusCode function_namespace0_generated_529_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 308LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12819LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientDescription"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_529_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12819LU));
}

/* SessionName - ns=0;i=12818 */

static UA_StatusCode function_namespace0_generated_530_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12818LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionName"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_530_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12818LU));
}

/* SessionId - ns=0;i=12817 */

static UA_StatusCode function_namespace0_generated_531_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12817LU),UA_NODEID_NUMERIC(ns[0], 12816LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionId"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_531_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12817LU));
}

/* SessionSecurityDiagnosticsArrayType - ns=0;i=2243 */

static UA_StatusCode function_namespace0_generated_532_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 868LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionSecurityDiagnosticsArrayType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 2243LU),UA_NODEID_NUMERIC(ns[0], 63LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "SessionSecurityDiagnosticsArrayType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_532_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2243LU));
}

/* SessionSecurityDiagnostics - ns=0;i=12860 */

static UA_StatusCode function_namespace0_generated_533_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 868LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionSecurityDiagnostics");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12860LU),UA_NODEID_NUMERIC(ns[0], 2243LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionSecurityDiagnostics"),UA_NODEID_NUMERIC(ns[0], 2244LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_533_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12860LU));
}

/* ClientCertificate - ns=0;i=12869 */

static UA_StatusCode function_namespace0_generated_534_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientCertificate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12869LU),UA_NODEID_NUMERIC(ns[0], 12860LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientCertificate"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_534_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12869LU));
}

/* SecurityPolicyUri - ns=0;i=12868 */

static UA_StatusCode function_namespace0_generated_535_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityPolicyUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12868LU),UA_NODEID_NUMERIC(ns[0], 12860LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SecurityPolicyUri"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_535_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12868LU));
}

/* SecurityMode - ns=0;i=12867 */

static UA_StatusCode function_namespace0_generated_536_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 302LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityMode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12867LU),UA_NODEID_NUMERIC(ns[0], 12860LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SecurityMode"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_536_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12867LU));
}

/* TransportProtocol - ns=0;i=12866 */

static UA_StatusCode function_namespace0_generated_537_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransportProtocol");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12866LU),UA_NODEID_NUMERIC(ns[0], 12860LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TransportProtocol"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_537_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12866LU));
}

/* Encoding - ns=0;i=12865 */

static UA_StatusCode function_namespace0_generated_538_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Encoding");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12865LU),UA_NODEID_NUMERIC(ns[0], 12860LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "Encoding"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_538_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12865LU));
}

/* AuthenticationMechanism - ns=0;i=12864 */

static UA_StatusCode function_namespace0_generated_539_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AuthenticationMechanism");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12864LU),UA_NODEID_NUMERIC(ns[0], 12860LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AuthenticationMechanism"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_539_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12864LU));
}

/* ClientUserIdHistory - ns=0;i=12863 */

static UA_StatusCode function_namespace0_generated_540_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientUserIdHistory");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12863LU),UA_NODEID_NUMERIC(ns[0], 12860LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientUserIdHistory"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_540_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12863LU));
}

/* ClientUserIdOfSession - ns=0;i=12862 */

static UA_StatusCode function_namespace0_generated_541_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientUserIdOfSession");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12862LU),UA_NODEID_NUMERIC(ns[0], 12860LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientUserIdOfSession"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_541_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12862LU));
}

/* SessionId - ns=0;i=12861 */

static UA_StatusCode function_namespace0_generated_542_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12861LU),UA_NODEID_NUMERIC(ns[0], 12860LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionId"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_542_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12861LU));
}

/* SessionsDiagnosticsSummaryType - ns=0;i=2026 */

static UA_StatusCode function_namespace0_generated_543_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SessionsDiagnosticsSummaryType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 2026LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "SessionsDiagnosticsSummaryType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_543_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2026LU));
}

/* SessionSecurityDiagnosticsArray - ns=0;i=2028 */

static UA_StatusCode function_namespace0_generated_544_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 868LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionSecurityDiagnosticsArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2028LU),UA_NODEID_NUMERIC(ns[0], 2026LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionSecurityDiagnosticsArray"),UA_NODEID_NUMERIC(ns[0], 2243LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_544_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2028LU));
}

/* SessionDiagnosticsArray - ns=0;i=2027 */

static UA_StatusCode function_namespace0_generated_545_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 865LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionDiagnosticsArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2027LU),UA_NODEID_NUMERIC(ns[0], 2026LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionDiagnosticsArray"),UA_NODEID_NUMERIC(ns[0], 2196LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_545_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2027LU));
}

/* <ClientName> - ns=0;i=12097 */

static UA_StatusCode function_namespace0_generated_546_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<ClientName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 12097LU),UA_NODEID_NUMERIC(ns[0], 2026LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "<ClientName>"),UA_NODEID_NUMERIC(ns[0], 2029LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_546_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12097LU));
}

/* SubscriptionDiagnosticsArray - ns=0;i=12152 */

static UA_StatusCode function_namespace0_generated_547_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 874LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SubscriptionDiagnosticsArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12152LU),UA_NODEID_NUMERIC(ns[0], 12097LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SubscriptionDiagnosticsArray"),UA_NODEID_NUMERIC(ns[0], 2171LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_547_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12152LU));
}

/* SessionSecurityDiagnostics - ns=0;i=12142 */

static UA_StatusCode function_namespace0_generated_548_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 868LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionSecurityDiagnostics");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12142LU),UA_NODEID_NUMERIC(ns[0], 12097LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionSecurityDiagnostics"),UA_NODEID_NUMERIC(ns[0], 2244LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_548_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12142LU));
}

/* ClientCertificate - ns=0;i=12151 */

static UA_StatusCode function_namespace0_generated_549_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientCertificate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12151LU),UA_NODEID_NUMERIC(ns[0], 12142LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientCertificate"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_549_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12151LU));
}

/* SecurityPolicyUri - ns=0;i=12150 */

static UA_StatusCode function_namespace0_generated_550_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityPolicyUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12150LU),UA_NODEID_NUMERIC(ns[0], 12142LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SecurityPolicyUri"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_550_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12150LU));
}

/* SecurityMode - ns=0;i=12149 */

static UA_StatusCode function_namespace0_generated_551_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 302LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityMode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12149LU),UA_NODEID_NUMERIC(ns[0], 12142LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SecurityMode"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_551_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12149LU));
}

/* TransportProtocol - ns=0;i=12148 */

static UA_StatusCode function_namespace0_generated_552_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransportProtocol");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12148LU),UA_NODEID_NUMERIC(ns[0], 12142LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TransportProtocol"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_552_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12148LU));
}

/* Encoding - ns=0;i=12147 */

static UA_StatusCode function_namespace0_generated_553_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Encoding");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12147LU),UA_NODEID_NUMERIC(ns[0], 12142LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "Encoding"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_553_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12147LU));
}

/* AuthenticationMechanism - ns=0;i=12146 */

static UA_StatusCode function_namespace0_generated_554_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AuthenticationMechanism");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12146LU),UA_NODEID_NUMERIC(ns[0], 12142LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AuthenticationMechanism"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_554_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12146LU));
}

/* ClientUserIdHistory - ns=0;i=12145 */

static UA_StatusCode function_namespace0_generated_555_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientUserIdHistory");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12145LU),UA_NODEID_NUMERIC(ns[0], 12142LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientUserIdHistory"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_555_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12145LU));
}

/* ClientUserIdOfSession - ns=0;i=12144 */

static UA_StatusCode function_namespace0_generated_556_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientUserIdOfSession");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12144LU),UA_NODEID_NUMERIC(ns[0], 12142LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientUserIdOfSession"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_556_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12144LU));
}

/* SessionId - ns=0;i=12143 */

static UA_StatusCode function_namespace0_generated_557_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12143LU),UA_NODEID_NUMERIC(ns[0], 12142LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionId"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_557_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12143LU));
}

/* SessionDiagnostics - ns=0;i=12098 */

static UA_StatusCode function_namespace0_generated_558_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 865LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionDiagnostics");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 12097LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionDiagnostics"),UA_NODEID_NUMERIC(ns[0], 2197LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_558_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12098LU));
}

/* UnregisterNodesCount - ns=0;i=12141 */

static UA_StatusCode function_namespace0_generated_559_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UnregisterNodesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12141LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "UnregisterNodesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_559_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12141LU));
}

/* RegisterNodesCount - ns=0;i=12140 */

static UA_StatusCode function_namespace0_generated_560_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RegisterNodesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12140LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RegisterNodesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_560_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12140LU));
}

/* QueryNextCount - ns=0;i=12139 */

static UA_StatusCode function_namespace0_generated_561_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "QueryNextCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12139LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "QueryNextCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_561_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12139LU));
}

/* QueryFirstCount - ns=0;i=12138 */

static UA_StatusCode function_namespace0_generated_562_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "QueryFirstCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12138LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "QueryFirstCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_562_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12138LU));
}

/* TranslateBrowsePathsToNodeIdsCount - ns=0;i=12137 */

static UA_StatusCode function_namespace0_generated_563_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TranslateBrowsePathsToNodeIdsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12137LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TranslateBrowsePathsToNodeIdsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_563_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12137LU));
}

/* BrowseNextCount - ns=0;i=12136 */

static UA_StatusCode function_namespace0_generated_564_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "BrowseNextCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12136LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "BrowseNextCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_564_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12136LU));
}

/* BrowseCount - ns=0;i=12135 */

static UA_StatusCode function_namespace0_generated_565_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "BrowseCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12135LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "BrowseCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_565_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12135LU));
}

/* DeleteReferencesCount - ns=0;i=12134 */

static UA_StatusCode function_namespace0_generated_566_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteReferencesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12134LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DeleteReferencesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_566_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12134LU));
}

/* DeleteNodesCount - ns=0;i=12133 */

static UA_StatusCode function_namespace0_generated_567_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteNodesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12133LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DeleteNodesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_567_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12133LU));
}

/* AddReferencesCount - ns=0;i=12132 */

static UA_StatusCode function_namespace0_generated_568_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AddReferencesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12132LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddReferencesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_568_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12132LU));
}

/* AddNodesCount - ns=0;i=12131 */

static UA_StatusCode function_namespace0_generated_569_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AddNodesCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12131LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddNodesCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_569_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12131LU));
}

/* DeleteSubscriptionsCount - ns=0;i=12130 */

static UA_StatusCode function_namespace0_generated_570_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteSubscriptionsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12130LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DeleteSubscriptionsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_570_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12130LU));
}

/* TransferSubscriptionsCount - ns=0;i=12129 */

static UA_StatusCode function_namespace0_generated_571_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TransferSubscriptionsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12129LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TransferSubscriptionsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_571_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12129LU));
}

/* RepublishCount - ns=0;i=12128 */

static UA_StatusCode function_namespace0_generated_572_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RepublishCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12128LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RepublishCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_572_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12128LU));
}

/* PublishCount - ns=0;i=12127 */

static UA_StatusCode function_namespace0_generated_573_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12127LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "PublishCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_573_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12127LU));
}

/* SetPublishingModeCount - ns=0;i=12126 */

static UA_StatusCode function_namespace0_generated_574_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SetPublishingModeCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12126LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SetPublishingModeCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_574_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12126LU));
}

/* ModifySubscriptionCount - ns=0;i=12125 */

static UA_StatusCode function_namespace0_generated_575_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ModifySubscriptionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12125LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ModifySubscriptionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_575_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12125LU));
}

/* CreateSubscriptionCount - ns=0;i=12124 */

static UA_StatusCode function_namespace0_generated_576_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CreateSubscriptionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12124LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CreateSubscriptionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_576_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12124LU));
}

/* DeleteMonitoredItemsCount - ns=0;i=12123 */

static UA_StatusCode function_namespace0_generated_577_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12123LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "DeleteMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_577_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12123LU));
}

/* SetTriggeringCount - ns=0;i=12122 */

static UA_StatusCode function_namespace0_generated_578_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SetTriggeringCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12122LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SetTriggeringCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_578_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12122LU));
}

/* SetMonitoringModeCount - ns=0;i=12121 */

static UA_StatusCode function_namespace0_generated_579_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SetMonitoringModeCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12121LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SetMonitoringModeCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_579_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12121LU));
}

/* ModifyMonitoredItemsCount - ns=0;i=12120 */

static UA_StatusCode function_namespace0_generated_580_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ModifyMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12120LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ModifyMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_580_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12120LU));
}

/* CreateMonitoredItemsCount - ns=0;i=12119 */

static UA_StatusCode function_namespace0_generated_581_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CreateMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12119LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CreateMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_581_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12119LU));
}

/* CallCount - ns=0;i=12118 */

static UA_StatusCode function_namespace0_generated_582_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CallCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12118LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CallCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_582_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12118LU));
}

/* HistoryUpdateCount - ns=0;i=12117 */

static UA_StatusCode function_namespace0_generated_583_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HistoryUpdateCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12117LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "HistoryUpdateCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_583_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12117LU));
}

/* WriteCount - ns=0;i=12116 */

static UA_StatusCode function_namespace0_generated_584_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "WriteCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12116LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "WriteCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_584_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12116LU));
}

/* HistoryReadCount - ns=0;i=12115 */

static UA_StatusCode function_namespace0_generated_585_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HistoryReadCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12115LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "HistoryReadCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_585_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12115LU));
}

/* ReadCount - ns=0;i=12114 */

static UA_StatusCode function_namespace0_generated_586_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ReadCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12114LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ReadCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_586_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12114LU));
}

/* UnauthorizedRequestCount - ns=0;i=12113 */

static UA_StatusCode function_namespace0_generated_587_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UnauthorizedRequestCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12113LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "UnauthorizedRequestCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_587_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12113LU));
}

/* TotalRequestCount - ns=0;i=12112 */

static UA_StatusCode function_namespace0_generated_588_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 871LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TotalRequestCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12112LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "TotalRequestCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_588_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12112LU));
}

/* CurrentPublishRequestsInQueue - ns=0;i=12111 */

static UA_StatusCode function_namespace0_generated_589_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentPublishRequestsInQueue");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12111LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentPublishRequestsInQueue"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_589_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12111LU));
}

/* CurrentMonitoredItemsCount - ns=0;i=12110 */

static UA_StatusCode function_namespace0_generated_590_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentMonitoredItemsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12110LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentMonitoredItemsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_590_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12110LU));
}

/* CurrentSubscriptionsCount - ns=0;i=12109 */

static UA_StatusCode function_namespace0_generated_591_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSubscriptionsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12109LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentSubscriptionsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_591_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12109LU));
}

/* ClientLastContactTime - ns=0;i=12108 */

static UA_StatusCode function_namespace0_generated_592_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientLastContactTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12108LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientLastContactTime"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_592_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12108LU));
}

/* ClientConnectionTime - ns=0;i=12107 */

static UA_StatusCode function_namespace0_generated_593_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientConnectionTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12107LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientConnectionTime"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_593_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12107LU));
}

/* MaxResponseMessageSize - ns=0;i=12106 */

static UA_StatusCode function_namespace0_generated_594_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxResponseMessageSize");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12106LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "MaxResponseMessageSize"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_594_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12106LU));
}

/* ActualSessionTimeout - ns=0;i=12105 */

static UA_StatusCode function_namespace0_generated_595_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ActualSessionTimeout");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12105LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ActualSessionTimeout"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_595_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12105LU));
}

/* LocaleIds - ns=0;i=12104 */

static UA_StatusCode function_namespace0_generated_596_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 295LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LocaleIds");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12104LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "LocaleIds"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_596_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12104LU));
}

/* EndpointUrl - ns=0;i=12103 */

static UA_StatusCode function_namespace0_generated_597_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EndpointUrl");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12103LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "EndpointUrl"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_597_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12103LU));
}

/* ServerUri - ns=0;i=12102 */

static UA_StatusCode function_namespace0_generated_598_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12102LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ServerUri"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_598_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12102LU));
}

/* ClientDescription - ns=0;i=12101 */

static UA_StatusCode function_namespace0_generated_599_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 308LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12101LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ClientDescription"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_599_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12101LU));
}

/* SessionName - ns=0;i=12100 */

static UA_StatusCode function_namespace0_generated_600_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12100LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionName"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_600_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12100LU));
}

/* SessionId - ns=0;i=12099 */

static UA_StatusCode function_namespace0_generated_601_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12099LU),UA_NODEID_NUMERIC(ns[0], 12098LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionId"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_601_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12099LU));
}

/* InterfaceTypes - ns=0;i=17708 */

static UA_StatusCode function_namespace0_generated_602_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "InterfaceTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 17708LU),UA_NODEID_NUMERIC(ns[0], 86LU),UA_NODEID_NUMERIC(ns[0], 35LU),UA_QUALIFIEDNAME(ns[0], "InterfaceTypes"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_602_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17708LU));
}

/* BaseInterfaceType - ns=0;i=17602 */

static UA_StatusCode function_namespace0_generated_603_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "BaseInterfaceType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 17602LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "BaseInterfaceType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 17602LU), UA_NODEID_NUMERIC(ns[0], 35LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17708LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_603_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17602LU));
}

/* BuildInfoType - ns=0;i=3051 */

static UA_StatusCode function_namespace0_generated_604_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 338LU);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildInfoType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 3051LU),UA_NODEID_NUMERIC(ns[0], 63LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "BuildInfoType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_604_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3051LU));
}

/* ServerStatusType - ns=0;i=2138 */

static UA_StatusCode function_namespace0_generated_605_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 862LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerStatusType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 2138LU),UA_NODEID_NUMERIC(ns[0], 63LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "ServerStatusType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_605_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2138LU));
}

/* OperationLimitsType - ns=0;i=11564 */

static UA_StatusCode function_namespace0_generated_606_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperationLimitsType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 11564LU),UA_NODEID_NUMERIC(ns[0], 61LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "OperationLimitsType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_606_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11564LU));
}

/* MaxMonitoredItemsPerCall - ns=0;i=11574 */

static UA_StatusCode function_namespace0_generated_607_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxMonitoredItemsPerCall");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11574LU),UA_NODEID_NUMERIC(ns[0], 11564LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxMonitoredItemsPerCall"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_607_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11574LU));
}

/* MaxNodesPerNodeManagement - ns=0;i=11573 */

static UA_StatusCode function_namespace0_generated_608_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerNodeManagement");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11573LU),UA_NODEID_NUMERIC(ns[0], 11564LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxNodesPerNodeManagement"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_608_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11573LU));
}

/* MaxNodesPerTranslateBrowsePathsToNodeIds - ns=0;i=11572 */

static UA_StatusCode function_namespace0_generated_609_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerTranslateBrowsePathsToNodeIds");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11572LU),UA_NODEID_NUMERIC(ns[0], 11564LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxNodesPerTranslateBrowsePathsToNodeIds"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_609_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11572LU));
}

/* MaxNodesPerRegisterNodes - ns=0;i=11571 */

static UA_StatusCode function_namespace0_generated_610_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerRegisterNodes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11571LU),UA_NODEID_NUMERIC(ns[0], 11564LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxNodesPerRegisterNodes"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_610_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11571LU));
}

/* MaxNodesPerBrowse - ns=0;i=11570 */

static UA_StatusCode function_namespace0_generated_611_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerBrowse");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11570LU),UA_NODEID_NUMERIC(ns[0], 11564LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxNodesPerBrowse"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_611_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11570LU));
}

/* MaxNodesPerMethodCall - ns=0;i=11569 */

static UA_StatusCode function_namespace0_generated_612_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerMethodCall");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11569LU),UA_NODEID_NUMERIC(ns[0], 11564LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxNodesPerMethodCall"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_612_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11569LU));
}

/* MaxNodesPerWrite - ns=0;i=11567 */

static UA_StatusCode function_namespace0_generated_613_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerWrite");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11567LU),UA_NODEID_NUMERIC(ns[0], 11564LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxNodesPerWrite"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_613_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11567LU));
}

/* MaxNodesPerRead - ns=0;i=11565 */

static UA_StatusCode function_namespace0_generated_614_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerRead");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11565LU),UA_NODEID_NUMERIC(ns[0], 11564LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxNodesPerRead"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_614_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11565LU));
}

/* ServerRedundancyType - ns=0;i=2034 */

static UA_StatusCode function_namespace0_generated_615_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerRedundancyType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 2034LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "ServerRedundancyType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_615_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2034LU));
}

/* RedundancySupport - ns=0;i=2035 */

static UA_StatusCode function_namespace0_generated_616_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 851LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RedundancySupport");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2035LU),UA_NODEID_NUMERIC(ns[0], 2034LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "RedundancySupport"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_616_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2035LU));
}

/* VendorServerInfoType - ns=0;i=2033 */

static UA_StatusCode function_namespace0_generated_617_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VendorServerInfoType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 2033LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "VendorServerInfoType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_617_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2033LU));
}

/* ServerDiagnosticsType - ns=0;i=2020 */

static UA_StatusCode function_namespace0_generated_618_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 2020LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_618_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2020LU));
}

/* SessionsDiagnosticsSummary - ns=0;i=2744 */

static UA_StatusCode function_namespace0_generated_619_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SessionsDiagnosticsSummary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 2744LU),UA_NODEID_NUMERIC(ns[0], 2020LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionsDiagnosticsSummary"),UA_NODEID_NUMERIC(ns[0], 2026LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_619_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2744LU));
}

/* SessionSecurityDiagnosticsArray - ns=0;i=3130 */

static UA_StatusCode function_namespace0_generated_620_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 868LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionSecurityDiagnosticsArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3130LU),UA_NODEID_NUMERIC(ns[0], 2744LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionSecurityDiagnosticsArray"),UA_NODEID_NUMERIC(ns[0], 2243LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_620_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3130LU));
}

/* SessionDiagnosticsArray - ns=0;i=3129 */

static UA_StatusCode function_namespace0_generated_621_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 865LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionDiagnosticsArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3129LU),UA_NODEID_NUMERIC(ns[0], 2744LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionDiagnosticsArray"),UA_NODEID_NUMERIC(ns[0], 2196LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_621_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3129LU));
}

/* EnabledFlag - ns=0;i=2025 */

static UA_StatusCode function_namespace0_generated_622_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EnabledFlag");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2025LU),UA_NODEID_NUMERIC(ns[0], 2020LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EnabledFlag"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_622_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2025LU));
}

/* SubscriptionDiagnosticsArray - ns=0;i=2023 */

static UA_StatusCode function_namespace0_generated_623_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 874LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SubscriptionDiagnosticsArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2023LU),UA_NODEID_NUMERIC(ns[0], 2020LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SubscriptionDiagnosticsArray"),UA_NODEID_NUMERIC(ns[0], 2171LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_623_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2023LU));
}

/* SamplingIntervalDiagnosticsArray - ns=0;i=2022 */

static UA_StatusCode function_namespace0_generated_624_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 856LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SamplingIntervalDiagnosticsArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2022LU),UA_NODEID_NUMERIC(ns[0], 2020LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SamplingIntervalDiagnosticsArray"),UA_NODEID_NUMERIC(ns[0], 2164LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_624_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2022LU));
}

/* ServerDiagnosticsSummary - ns=0;i=2021 */

static UA_StatusCode function_namespace0_generated_625_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 859LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsSummary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2021LU),UA_NODEID_NUMERIC(ns[0], 2020LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsSummary"),UA_NODEID_NUMERIC(ns[0], 2150LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_625_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2021LU));
}

/* RejectedRequestsCount - ns=0;i=3128 */

static UA_StatusCode function_namespace0_generated_626_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RejectedRequestsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3128LU),UA_NODEID_NUMERIC(ns[0], 2021LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RejectedRequestsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_626_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3128LU));
}

/* SecurityRejectedRequestsCount - ns=0;i=3127 */

static UA_StatusCode function_namespace0_generated_627_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityRejectedRequestsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3127LU),UA_NODEID_NUMERIC(ns[0], 2021LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SecurityRejectedRequestsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_627_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3127LU));
}

/* CumulatedSubscriptionCount - ns=0;i=3126 */

static UA_StatusCode function_namespace0_generated_628_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CumulatedSubscriptionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3126LU),UA_NODEID_NUMERIC(ns[0], 2021LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CumulatedSubscriptionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_628_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3126LU));
}

/* CurrentSubscriptionCount - ns=0;i=3125 */

static UA_StatusCode function_namespace0_generated_629_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSubscriptionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3125LU),UA_NODEID_NUMERIC(ns[0], 2021LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentSubscriptionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_629_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3125LU));
}

/* PublishingIntervalCount - ns=0;i=3124 */

static UA_StatusCode function_namespace0_generated_630_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishingIntervalCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3124LU),UA_NODEID_NUMERIC(ns[0], 2021LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "PublishingIntervalCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_630_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3124LU));
}

/* SessionAbortCount - ns=0;i=3122 */

static UA_StatusCode function_namespace0_generated_631_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionAbortCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3122LU),UA_NODEID_NUMERIC(ns[0], 2021LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionAbortCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_631_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3122LU));
}

/* SessionTimeoutCount - ns=0;i=3121 */

static UA_StatusCode function_namespace0_generated_632_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionTimeoutCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3121LU),UA_NODEID_NUMERIC(ns[0], 2021LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionTimeoutCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_632_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3121LU));
}

/* RejectedSessionCount - ns=0;i=3120 */

static UA_StatusCode function_namespace0_generated_633_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RejectedSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3120LU),UA_NODEID_NUMERIC(ns[0], 2021LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RejectedSessionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_633_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3120LU));
}

/* SecurityRejectedSessionCount - ns=0;i=3119 */

static UA_StatusCode function_namespace0_generated_634_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityRejectedSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3119LU),UA_NODEID_NUMERIC(ns[0], 2021LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SecurityRejectedSessionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_634_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3119LU));
}

/* CumulatedSessionCount - ns=0;i=3118 */

static UA_StatusCode function_namespace0_generated_635_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CumulatedSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3118LU),UA_NODEID_NUMERIC(ns[0], 2021LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CumulatedSessionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_635_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3118LU));
}

/* CurrentSessionCount - ns=0;i=3117 */

static UA_StatusCode function_namespace0_generated_636_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3117LU),UA_NODEID_NUMERIC(ns[0], 2021LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentSessionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_636_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3117LU));
}

/* ServerViewCount - ns=0;i=3116 */

static UA_StatusCode function_namespace0_generated_637_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerViewCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3116LU),UA_NODEID_NUMERIC(ns[0], 2021LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ServerViewCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_637_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3116LU));
}

/* ServerCapabilitiesType - ns=0;i=2013 */

static UA_StatusCode function_namespace0_generated_638_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerCapabilitiesType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 2013LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "ServerCapabilitiesType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_638_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2013LU));
}

/* OperationLimits - ns=0;i=11551 */

static UA_StatusCode function_namespace0_generated_639_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperationLimits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 11551LU),UA_NODEID_NUMERIC(ns[0], 2013LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "OperationLimits"),UA_NODEID_NUMERIC(ns[0], 11564LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_639_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11551LU));
}

/* ServerType - ns=0;i=2004 */

static UA_StatusCode function_namespace0_generated_640_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 2004LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "ServerType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_640_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2004LU));
}

/* Server - ns=0;i=2253 */

static UA_StatusCode function_namespace0_generated_641_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.eventNotifier = UA_EVENTNOTIFIER_SUBSCRIBE_TO_EVENT;
attr.displayName = UA_LOCALIZEDTEXT("", "Server");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 2253LU),UA_NODEID_NUMERIC(ns[0], 85LU),UA_NODEID_NUMERIC(ns[0], 35LU),UA_QUALIFIEDNAME(ns[0], "Server"),UA_NODEID_NUMERIC(ns[0], 2004LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_641_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2253LU));
}

/* Auditing - ns=0;i=2994 */

static UA_StatusCode function_namespace0_generated_642_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Auditing");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2994LU),UA_NODEID_NUMERIC(ns[0], 2253LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "Auditing"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_642_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2994LU));
}

/* ServerRedundancy - ns=0;i=2296 */

static UA_StatusCode function_namespace0_generated_643_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerRedundancy");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 2296LU),UA_NODEID_NUMERIC(ns[0], 2253LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ServerRedundancy"),UA_NODEID_NUMERIC(ns[0], 2034LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_643_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2296LU));
}

/* RedundancySupport - ns=0;i=3709 */

static UA_StatusCode function_namespace0_generated_644_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 851LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RedundancySupport");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3709LU),UA_NODEID_NUMERIC(ns[0], 2296LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "RedundancySupport"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_644_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3709LU));
}

/* VendorServerInfo - ns=0;i=2295 */

static UA_StatusCode function_namespace0_generated_645_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VendorServerInfo");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 2295LU),UA_NODEID_NUMERIC(ns[0], 2253LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "VendorServerInfo"),UA_NODEID_NUMERIC(ns[0], 2033LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_645_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2295LU));
}

/* ServerDiagnostics - ns=0;i=2274 */

static UA_StatusCode function_namespace0_generated_646_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnostics");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 2274LU),UA_NODEID_NUMERIC(ns[0], 2253LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ServerDiagnostics"),UA_NODEID_NUMERIC(ns[0], 2020LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_646_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2274LU));
}

/* SessionsDiagnosticsSummary - ns=0;i=3706 */

static UA_StatusCode function_namespace0_generated_647_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SessionsDiagnosticsSummary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 3706LU),UA_NODEID_NUMERIC(ns[0], 2274LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionsDiagnosticsSummary"),UA_NODEID_NUMERIC(ns[0], 2026LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_647_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3706LU));
}

/* SessionSecurityDiagnosticsArray - ns=0;i=3708 */

static UA_StatusCode function_namespace0_generated_648_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 868LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionSecurityDiagnosticsArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3708LU),UA_NODEID_NUMERIC(ns[0], 3706LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionSecurityDiagnosticsArray"),UA_NODEID_NUMERIC(ns[0], 2243LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_648_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3708LU));
}

/* SessionDiagnosticsArray - ns=0;i=3707 */

static UA_StatusCode function_namespace0_generated_649_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 865LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionDiagnosticsArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3707LU),UA_NODEID_NUMERIC(ns[0], 3706LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionDiagnosticsArray"),UA_NODEID_NUMERIC(ns[0], 2196LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_649_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3707LU));
}

/* EnabledFlag - ns=0;i=2294 */

static UA_StatusCode function_namespace0_generated_650_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EnabledFlag");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2294LU),UA_NODEID_NUMERIC(ns[0], 2274LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EnabledFlag"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_650_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2294LU));
}

/* SubscriptionDiagnosticsArray - ns=0;i=2290 */

static UA_StatusCode function_namespace0_generated_651_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 874LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SubscriptionDiagnosticsArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2290LU),UA_NODEID_NUMERIC(ns[0], 2274LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SubscriptionDiagnosticsArray"),UA_NODEID_NUMERIC(ns[0], 2171LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_651_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2290LU));
}

/* ServerDiagnosticsSummary - ns=0;i=2275 */

static UA_StatusCode function_namespace0_generated_652_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 859LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsSummary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2275LU),UA_NODEID_NUMERIC(ns[0], 2274LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsSummary"),UA_NODEID_NUMERIC(ns[0], 2150LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_652_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2275LU));
}

/* RejectedSessionCount - ns=0;i=3705 */

static UA_StatusCode function_namespace0_generated_653_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RejectedSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3705LU),UA_NODEID_NUMERIC(ns[0], 2275LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RejectedSessionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_653_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3705LU));
}

/* RejectedRequestsCount - ns=0;i=2288 */

static UA_StatusCode function_namespace0_generated_654_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RejectedRequestsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2288LU),UA_NODEID_NUMERIC(ns[0], 2275LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RejectedRequestsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_654_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2288LU));
}

/* SecurityRejectedRequestsCount - ns=0;i=2287 */

static UA_StatusCode function_namespace0_generated_655_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityRejectedRequestsCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2287LU),UA_NODEID_NUMERIC(ns[0], 2275LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SecurityRejectedRequestsCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_655_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2287LU));
}

/* CumulatedSubscriptionCount - ns=0;i=2286 */

static UA_StatusCode function_namespace0_generated_656_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CumulatedSubscriptionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2286LU),UA_NODEID_NUMERIC(ns[0], 2275LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CumulatedSubscriptionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_656_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2286LU));
}

/* CurrentSubscriptionCount - ns=0;i=2285 */

static UA_StatusCode function_namespace0_generated_657_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSubscriptionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2285LU),UA_NODEID_NUMERIC(ns[0], 2275LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentSubscriptionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_657_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2285LU));
}

/* PublishingIntervalCount - ns=0;i=2284 */

static UA_StatusCode function_namespace0_generated_658_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PublishingIntervalCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2284LU),UA_NODEID_NUMERIC(ns[0], 2275LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "PublishingIntervalCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_658_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2284LU));
}

/* SessionAbortCount - ns=0;i=2282 */

static UA_StatusCode function_namespace0_generated_659_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionAbortCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2282LU),UA_NODEID_NUMERIC(ns[0], 2275LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionAbortCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_659_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2282LU));
}

/* SessionTimeoutCount - ns=0;i=2281 */

static UA_StatusCode function_namespace0_generated_660_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SessionTimeoutCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2281LU),UA_NODEID_NUMERIC(ns[0], 2275LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SessionTimeoutCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_660_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2281LU));
}

/* SecurityRejectedSessionCount - ns=0;i=2279 */

static UA_StatusCode function_namespace0_generated_661_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityRejectedSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2279LU),UA_NODEID_NUMERIC(ns[0], 2275LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SecurityRejectedSessionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_661_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2279LU));
}

/* CumulatedSessionCount - ns=0;i=2278 */

static UA_StatusCode function_namespace0_generated_662_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CumulatedSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2278LU),UA_NODEID_NUMERIC(ns[0], 2275LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CumulatedSessionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_662_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2278LU));
}

/* CurrentSessionCount - ns=0;i=2277 */

static UA_StatusCode function_namespace0_generated_663_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentSessionCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2277LU),UA_NODEID_NUMERIC(ns[0], 2275LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentSessionCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_663_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2277LU));
}

/* ServerViewCount - ns=0;i=2276 */

static UA_StatusCode function_namespace0_generated_664_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerViewCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2276LU),UA_NODEID_NUMERIC(ns[0], 2275LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ServerViewCount"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_664_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2276LU));
}

/* ServerCapabilities - ns=0;i=2268 */

static UA_StatusCode function_namespace0_generated_665_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerCapabilities");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 2268LU),UA_NODEID_NUMERIC(ns[0], 2253LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ServerCapabilities"),UA_NODEID_NUMERIC(ns[0], 2013LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_665_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2268LU));
}

/* SoftwareCertificates - ns=0;i=3704 */

static UA_StatusCode function_namespace0_generated_666_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 344LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareCertificates");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 3704LU),UA_NODEID_NUMERIC(ns[0], 2268LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "SoftwareCertificates"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_666_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3704LU));
}

/* AggregateFunctions - ns=0;i=2997 */

static UA_StatusCode function_namespace0_generated_667_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AggregateFunctions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 2997LU),UA_NODEID_NUMERIC(ns[0], 2268LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AggregateFunctions"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_667_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2997LU));
}

/* ModellingRules - ns=0;i=2996 */

static UA_StatusCode function_namespace0_generated_668_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ModellingRules");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 2996LU),UA_NODEID_NUMERIC(ns[0], 2268LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ModellingRules"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_668_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2996LU));
}

/* MaxHistoryContinuationPoints - ns=0;i=2737 */

static UA_StatusCode function_namespace0_generated_669_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxHistoryContinuationPoints");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2737LU),UA_NODEID_NUMERIC(ns[0], 2268LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxHistoryContinuationPoints"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_669_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2737LU));
}

/* MaxQueryContinuationPoints - ns=0;i=2736 */

static UA_StatusCode function_namespace0_generated_670_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxQueryContinuationPoints");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2736LU),UA_NODEID_NUMERIC(ns[0], 2268LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxQueryContinuationPoints"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_670_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2736LU));
}

/* MaxBrowseContinuationPoints - ns=0;i=2735 */

static UA_StatusCode function_namespace0_generated_671_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxBrowseContinuationPoints");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2735LU),UA_NODEID_NUMERIC(ns[0], 2268LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxBrowseContinuationPoints"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_671_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2735LU));
}

/* MinSupportedSampleRate - ns=0;i=2272 */

static UA_StatusCode function_namespace0_generated_672_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MinSupportedSampleRate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2272LU),UA_NODEID_NUMERIC(ns[0], 2268LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MinSupportedSampleRate"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_672_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2272LU));
}

/* LocaleIdArray - ns=0;i=2271 */

static UA_StatusCode function_namespace0_generated_673_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 295LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LocaleIdArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2271LU),UA_NODEID_NUMERIC(ns[0], 2268LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "LocaleIdArray"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_673_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2271LU));
}

/* ServerProfileArray - ns=0;i=2269 */

static UA_StatusCode function_namespace0_generated_674_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerProfileArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2269LU),UA_NODEID_NUMERIC(ns[0], 2268LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "ServerProfileArray"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_674_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2269LU));
}

/* OperationLimits - ns=0;i=11704 */

static UA_StatusCode function_namespace0_generated_675_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperationLimits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 11704LU),UA_NODEID_NUMERIC(ns[0], 2268LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "OperationLimits"),UA_NODEID_NUMERIC(ns[0], 11564LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_675_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11704LU));
}

/* MaxMonitoredItemsPerCall - ns=0;i=11714 */

static UA_StatusCode function_namespace0_generated_676_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxMonitoredItemsPerCall");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11714LU),UA_NODEID_NUMERIC(ns[0], 11704LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxMonitoredItemsPerCall"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_676_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11714LU));
}

/* MaxNodesPerNodeManagement - ns=0;i=11713 */

static UA_StatusCode function_namespace0_generated_677_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerNodeManagement");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11713LU),UA_NODEID_NUMERIC(ns[0], 11704LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxNodesPerNodeManagement"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_677_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11713LU));
}

/* MaxNodesPerTranslateBrowsePathsToNodeIds - ns=0;i=11712 */

static UA_StatusCode function_namespace0_generated_678_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerTranslateBrowsePathsToNodeIds");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11712LU),UA_NODEID_NUMERIC(ns[0], 11704LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxNodesPerTranslateBrowsePathsToNodeIds"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_678_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11712LU));
}

/* MaxNodesPerRegisterNodes - ns=0;i=11711 */

static UA_StatusCode function_namespace0_generated_679_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerRegisterNodes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11711LU),UA_NODEID_NUMERIC(ns[0], 11704LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxNodesPerRegisterNodes"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_679_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11711LU));
}

/* MaxNodesPerBrowse - ns=0;i=11710 */

static UA_StatusCode function_namespace0_generated_680_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerBrowse");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11710LU),UA_NODEID_NUMERIC(ns[0], 11704LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxNodesPerBrowse"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_680_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11710LU));
}

/* MaxNodesPerMethodCall - ns=0;i=11709 */

static UA_StatusCode function_namespace0_generated_681_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerMethodCall");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11709LU),UA_NODEID_NUMERIC(ns[0], 11704LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxNodesPerMethodCall"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_681_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11709LU));
}

/* MaxNodesPerWrite - ns=0;i=11707 */

static UA_StatusCode function_namespace0_generated_682_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerWrite");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11707LU),UA_NODEID_NUMERIC(ns[0], 11704LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxNodesPerWrite"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_682_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11707LU));
}

/* MaxNodesPerRead - ns=0;i=11705 */

static UA_StatusCode function_namespace0_generated_683_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerRead");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11705LU),UA_NODEID_NUMERIC(ns[0], 11704LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxNodesPerRead"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_683_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11705LU));
}

/* HistoryServerCapabilities - ns=0;i=11192 */

static UA_StatusCode function_namespace0_generated_684_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HistoryServerCapabilities");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 11192LU),UA_NODEID_NUMERIC(ns[0], 2268LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "HistoryServerCapabilities"),UA_NODEID_NUMERIC(ns[0], 2330LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_684_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11192LU));
}

/* DeleteEventCapability - ns=0;i=11502 */

static UA_StatusCode function_namespace0_generated_685_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteEventCapability");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11502LU),UA_NODEID_NUMERIC(ns[0], 11192LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DeleteEventCapability"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_685_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11502LU));
}

/* UpdateEventCapability - ns=0;i=11283 */

static UA_StatusCode function_namespace0_generated_686_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UpdateEventCapability");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11283LU),UA_NODEID_NUMERIC(ns[0], 11192LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "UpdateEventCapability"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_686_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11283LU));
}

/* ReplaceEventCapability - ns=0;i=11282 */

static UA_StatusCode function_namespace0_generated_687_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ReplaceEventCapability");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11282LU),UA_NODEID_NUMERIC(ns[0], 11192LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "ReplaceEventCapability"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_687_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11282LU));
}

/* InsertEventCapability - ns=0;i=11281 */

static UA_StatusCode function_namespace0_generated_688_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "InsertEventCapability");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11281LU),UA_NODEID_NUMERIC(ns[0], 11192LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InsertEventCapability"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_688_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11281LU));
}

/* InsertAnnotationCapability - ns=0;i=11275 */

static UA_StatusCode function_namespace0_generated_689_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "InsertAnnotationCapability");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11275LU),UA_NODEID_NUMERIC(ns[0], 11192LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InsertAnnotationCapability"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_689_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11275LU));
}

/* MaxReturnEventValues - ns=0;i=11274 */

static UA_StatusCode function_namespace0_generated_690_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxReturnEventValues");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11274LU),UA_NODEID_NUMERIC(ns[0], 11192LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxReturnEventValues"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_690_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11274LU));
}

/* MaxReturnDataValues - ns=0;i=11273 */

static UA_StatusCode function_namespace0_generated_691_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxReturnDataValues");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11273LU),UA_NODEID_NUMERIC(ns[0], 11192LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "MaxReturnDataValues"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_691_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11273LU));
}

/* AccessHistoryEventsCapability - ns=0;i=11242 */

static UA_StatusCode function_namespace0_generated_692_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AccessHistoryEventsCapability");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11242LU),UA_NODEID_NUMERIC(ns[0], 11192LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "AccessHistoryEventsCapability"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_692_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11242LU));
}

/* AggregateFunctions - ns=0;i=11201 */

static UA_StatusCode function_namespace0_generated_693_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AggregateFunctions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 11201LU),UA_NODEID_NUMERIC(ns[0], 11192LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AggregateFunctions"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_693_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11201LU));
}

/* DeleteAtTimeCapability - ns=0;i=11200 */

static UA_StatusCode function_namespace0_generated_694_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteAtTimeCapability");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11200LU),UA_NODEID_NUMERIC(ns[0], 11192LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DeleteAtTimeCapability"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_694_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11200LU));
}

/* DeleteRawCapability - ns=0;i=11199 */

static UA_StatusCode function_namespace0_generated_695_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeleteRawCapability");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11199LU),UA_NODEID_NUMERIC(ns[0], 11192LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DeleteRawCapability"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_695_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11199LU));
}

/* UpdateDataCapability - ns=0;i=11198 */

static UA_StatusCode function_namespace0_generated_696_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UpdateDataCapability");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11198LU),UA_NODEID_NUMERIC(ns[0], 11192LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "UpdateDataCapability"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_696_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11198LU));
}

/* ReplaceDataCapability - ns=0;i=11197 */

static UA_StatusCode function_namespace0_generated_697_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ReplaceDataCapability");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11197LU),UA_NODEID_NUMERIC(ns[0], 11192LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "ReplaceDataCapability"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_697_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11197LU));
}

/* InsertDataCapability - ns=0;i=11196 */

static UA_StatusCode function_namespace0_generated_698_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "InsertDataCapability");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11196LU),UA_NODEID_NUMERIC(ns[0], 11192LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InsertDataCapability"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_698_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11196LU));
}

/* AccessHistoryDataCapability - ns=0;i=11193 */

static UA_StatusCode function_namespace0_generated_699_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AccessHistoryDataCapability");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11193LU),UA_NODEID_NUMERIC(ns[0], 11192LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "AccessHistoryDataCapability"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_699_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11193LU));
}

/* ServiceLevel - ns=0;i=2267 */

static UA_StatusCode function_namespace0_generated_700_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServiceLevel");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2267LU),UA_NODEID_NUMERIC(ns[0], 2253LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "ServiceLevel"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_700_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2267LU));
}

/* ServerStatus - ns=0;i=2256 */

static UA_StatusCode function_namespace0_generated_701_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 862LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerStatus");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2256LU),UA_NODEID_NUMERIC(ns[0], 2253LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ServerStatus"),UA_NODEID_NUMERIC(ns[0], 2138LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_701_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2256LU));
}

/* ShutdownReason - ns=0;i=2993 */

static UA_StatusCode function_namespace0_generated_702_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ShutdownReason");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2993LU),UA_NODEID_NUMERIC(ns[0], 2256LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ShutdownReason"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_702_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2993LU));
}

/* SecondsTillShutdown - ns=0;i=2992 */

static UA_StatusCode function_namespace0_generated_703_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecondsTillShutdown");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2992LU),UA_NODEID_NUMERIC(ns[0], 2256LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SecondsTillShutdown"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_703_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2992LU));
}

/* BuildInfo - ns=0;i=2260 */

static UA_StatusCode function_namespace0_generated_704_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 338LU);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildInfo");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2260LU),UA_NODEID_NUMERIC(ns[0], 2256LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "BuildInfo"),UA_NODEID_NUMERIC(ns[0], 3051LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_704_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2260LU));
}

/* BuildDate - ns=0;i=2266 */

static UA_StatusCode function_namespace0_generated_705_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2266LU),UA_NODEID_NUMERIC(ns[0], 2260LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "BuildDate"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_705_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2266LU));
}

/* BuildNumber - ns=0;i=2265 */

static UA_StatusCode function_namespace0_generated_706_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2265LU),UA_NODEID_NUMERIC(ns[0], 2260LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "BuildNumber"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_706_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2265LU));
}

/* SoftwareVersion - ns=0;i=2264 */

static UA_StatusCode function_namespace0_generated_707_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2264LU),UA_NODEID_NUMERIC(ns[0], 2260LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SoftwareVersion"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_707_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2264LU));
}

/* ManufacturerName - ns=0;i=2263 */

static UA_StatusCode function_namespace0_generated_708_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ManufacturerName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2263LU),UA_NODEID_NUMERIC(ns[0], 2260LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ManufacturerName"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_708_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2263LU));
}

/* ProductUri - ns=0;i=2262 */

static UA_StatusCode function_namespace0_generated_709_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2262LU),UA_NODEID_NUMERIC(ns[0], 2260LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ProductUri"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_709_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2262LU));
}

/* ProductName - ns=0;i=2261 */

static UA_StatusCode function_namespace0_generated_710_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2261LU),UA_NODEID_NUMERIC(ns[0], 2260LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ProductName"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_710_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2261LU));
}

/* State - ns=0;i=2259 */

static UA_StatusCode function_namespace0_generated_711_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 852LU);
attr.displayName = UA_LOCALIZEDTEXT("", "State");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2259LU),UA_NODEID_NUMERIC(ns[0], 2256LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "State"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_711_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2259LU));
}

/* CurrentTime - ns=0;i=2258 */

static UA_StatusCode function_namespace0_generated_712_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2258LU),UA_NODEID_NUMERIC(ns[0], 2256LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "CurrentTime"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_712_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2258LU));
}

/* StartTime - ns=0;i=2257 */

static UA_StatusCode function_namespace0_generated_713_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StartTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2257LU),UA_NODEID_NUMERIC(ns[0], 2256LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "StartTime"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_713_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2257LU));
}

/* NamespaceArray - ns=0;i=2255 */

static UA_StatusCode function_namespace0_generated_714_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2255LU),UA_NODEID_NUMERIC(ns[0], 2253LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "NamespaceArray"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_714_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2255LU));
}

/* ServerArray - ns=0;i=2254 */

static UA_StatusCode function_namespace0_generated_715_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 2254LU),UA_NODEID_NUMERIC(ns[0], 2253LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "ServerArray"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_715_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2254LU));
}

/* PublishSubscribe - ns=0;i=14443 */

static UA_StatusCode function_namespace0_generated_716_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PublishSubscribe");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 14443LU),UA_NODEID_NUMERIC(ns[0], 2253LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "PublishSubscribe"),UA_NODEID_NUMERIC(ns[0], 14416LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_716_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 14443LU));
}

/* DefaultDatagramPublisherId - ns=0;i=25480 */

static UA_StatusCode function_namespace0_generated_717_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 9LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultDatagramPublisherId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 25480LU),UA_NODEID_NUMERIC(ns[0], 14443LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DefaultDatagramPublisherId"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_717_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 25480LU));
}

/* PubSubConfiguration - ns=0;i=25451 */

static UA_StatusCode function_namespace0_generated_718_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PubSubConfiguration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 25451LU),UA_NODEID_NUMERIC(ns[0], 14443LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "PubSubConfiguration"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_718_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 25451LU));
}

/* ReserveIds - ns=0;i=25474 */

static UA_StatusCode function_namespace0_generated_719_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ReserveIds");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 25474LU),UA_NODEID_NUMERIC(ns[0], 25451LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ReserveIds"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_719_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 25474LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=25476 */

static UA_StatusCode function_namespace0_generated_720_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 3;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_25476_variant_DataContents[3];

UA_init(&variablenode_ns_0_i_25476_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_25476_variant_DataContents[0].name = UA_STRING("DefaultPublisherId");
variablenode_ns_0_i_25476_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
variablenode_ns_0_i_25476_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_0_i_25476_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_25476_variant_DataContents[1].name = UA_STRING("WriterGroupIds");
variablenode_ns_0_i_25476_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
variablenode_ns_0_i_25476_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_0_i_25476_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_25476_variant_DataContents[2].name = UA_STRING("DataSetWriterIds");
variablenode_ns_0_i_25476_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
variablenode_ns_0_i_25476_variant_DataContents[2].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_25476_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 25476LU),UA_NODEID_NUMERIC(ns[0], 25474LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "OutputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);



return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_720_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 25476LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=25475 */

static UA_StatusCode function_namespace0_generated_721_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 3;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_25475_variant_DataContents[3];

UA_init(&variablenode_ns_0_i_25475_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_25475_variant_DataContents[0].name = UA_STRING("TransportProfileUri");
variablenode_ns_0_i_25475_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_0_i_25475_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_0_i_25475_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_25475_variant_DataContents[1].name = UA_STRING("NumReqWriterGroupIds");
variablenode_ns_0_i_25475_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
variablenode_ns_0_i_25475_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_0_i_25475_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_25475_variant_DataContents[2].name = UA_STRING("NumReqDataSetWriterIds");
variablenode_ns_0_i_25475_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
variablenode_ns_0_i_25475_variant_DataContents[2].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_25475_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 25475LU),UA_NODEID_NUMERIC(ns[0], 25474LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);



return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_721_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 25475LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* SubscribedDataSets - ns=0;i=23658 */

static UA_StatusCode function_namespace0_generated_722_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SubscribedDataSets");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 23658LU),UA_NODEID_NUMERIC(ns[0], 14443LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "SubscribedDataSets"),UA_NODEID_NUMERIC(ns[0], 23795LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_722_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 23658LU));
}

/* SupportedTransportProfiles - ns=0;i=17481 */

static UA_StatusCode function_namespace0_generated_723_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SupportedTransportProfiles");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17481LU),UA_NODEID_NUMERIC(ns[0], 14443LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "SupportedTransportProfiles"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_723_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17481LU));
}

/* PublishedDataSets - ns=0;i=17371 */

static UA_StatusCode function_namespace0_generated_724_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PublishedDataSets");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 17371LU),UA_NODEID_NUMERIC(ns[0], 14443LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "PublishedDataSets"),UA_NODEID_NUMERIC(ns[0], 14477LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_724_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17371LU));
}

/* RemoveConnection - ns=0;i=17369 */

static UA_StatusCode function_namespace0_generated_725_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RemoveConnection");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 17369LU),UA_NODEID_NUMERIC(ns[0], 14443LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "RemoveConnection"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_725_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17369LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=17370 */

static UA_StatusCode function_namespace0_generated_726_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_17370_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_17370_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_17370_variant_DataContents[0].name = UA_STRING("ConnectionId");
variablenode_ns_0_i_17370_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_17370_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_17370_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17370LU),UA_NODEID_NUMERIC(ns[0], 17369LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_726_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17370LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AddConnection - ns=0;i=17366 */

static UA_StatusCode function_namespace0_generated_727_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AddConnection");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 17366LU),UA_NODEID_NUMERIC(ns[0], 14443LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "AddConnection"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_727_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17366LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=17368 */

static UA_StatusCode function_namespace0_generated_728_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_17368_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_17368_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_17368_variant_DataContents[0].name = UA_STRING("ConnectionId");
variablenode_ns_0_i_17368_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_0_i_17368_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_17368_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17368LU),UA_NODEID_NUMERIC(ns[0], 17366LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "OutputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_728_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17368LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=17367 */

static UA_StatusCode function_namespace0_generated_729_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_17367_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_17367_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_17367_variant_DataContents[0].name = UA_STRING("Configuration");
variablenode_ns_0_i_17367_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15617LU);
variablenode_ns_0_i_17367_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_17367_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 17367LU),UA_NODEID_NUMERIC(ns[0], 17366LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_729_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 17367LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ResendData - ns=0;i=12873 */

static UA_StatusCode function_namespace0_generated_730_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ResendData");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 12873LU),UA_NODEID_NUMERIC(ns[0], 2253LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "ResendData"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_730_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12873LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=12874 */

static UA_StatusCode function_namespace0_generated_731_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_12874_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_12874_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_12874_variant_DataContents[0].name = UA_STRING("SubscriptionId");
variablenode_ns_0_i_12874_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_0_i_12874_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_12874_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 12874LU),UA_NODEID_NUMERIC(ns[0], 12873LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_731_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 12874LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* GetMonitoredItems - ns=0;i=11492 */

static UA_StatusCode function_namespace0_generated_732_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetMonitoredItems");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,UA_NODEID_NUMERIC(ns[0], 11492LU),UA_NODEID_NUMERIC(ns[0], 2253LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "GetMonitoredItems"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_732_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11492LU), NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=0;i=11494 */

static UA_StatusCode function_namespace0_generated_733_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_11494_variant_DataContents[2];

UA_init(&variablenode_ns_0_i_11494_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_11494_variant_DataContents[0].name = UA_STRING("ServerHandles");
variablenode_ns_0_i_11494_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_0_i_11494_variant_DataContents[0].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11494_variant_DataContents0_arrayDimensions, 1);
UA_init(variablenode_ns_0_i_11494_variant_DataContents0_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_0_i_11494_variant_DataContents0_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_0_i_11494_variant_DataContents[0].arrayDimensionsSize = 1;
variablenode_ns_0_i_11494_variant_DataContents[0].arrayDimensions = variablenode_ns_0_i_11494_variant_DataContents0_arrayDimensions;

UA_init(&variablenode_ns_0_i_11494_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_11494_variant_DataContents[1].name = UA_STRING("ClientHandles");
variablenode_ns_0_i_11494_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_0_i_11494_variant_DataContents[1].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_0_i_11494_variant_DataContents1_arrayDimensions, 1);
UA_init(variablenode_ns_0_i_11494_variant_DataContents1_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_0_i_11494_variant_DataContents1_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_0_i_11494_variant_DataContents[1].arrayDimensionsSize = 1;
variablenode_ns_0_i_11494_variant_DataContents[1].arrayDimensions = variablenode_ns_0_i_11494_variant_DataContents1_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_11494_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11494LU),UA_NODEID_NUMERIC(ns[0], 11492LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "OutputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_733_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11494LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=0;i=11493 */

static UA_StatusCode function_namespace0_generated_734_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_0_i_11493_variant_DataContents[1];

UA_init(&variablenode_ns_0_i_11493_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_0_i_11493_variant_DataContents[0].name = UA_STRING("SubscriptionId");
variablenode_ns_0_i_11493_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_0_i_11493_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_0_i_11493_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11493LU),UA_NODEID_NUMERIC(ns[0], 11492LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "InputArguments"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_734_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11493LU));
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* VendorServerInfo - ns=0;i=2011 */

static UA_StatusCode function_namespace0_generated_735_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VendorServerInfo");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 2011LU),UA_NODEID_NUMERIC(ns[0], 2004LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "VendorServerInfo"),UA_NODEID_NUMERIC(ns[0], 2033LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_735_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 2011LU));
}

/* ModellingRuleType - ns=0;i=77 */

static UA_StatusCode function_namespace0_generated_736_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ModellingRuleType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 77LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "ModellingRuleType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_736_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 77LU));
}

/* ExposesItsArray - ns=0;i=83 */

static UA_StatusCode function_namespace0_generated_737_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ExposesItsArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 83LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_QUALIFIEDNAME(ns[0], "ExposesItsArray"),UA_NODEID_NUMERIC(ns[0], 77LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 83LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12860LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 83LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12816LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 83LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12779LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 83LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12784LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_737_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 83LU));
}

/* NamingRule - ns=0;i=114 */

static UA_StatusCode function_namespace0_generated_738_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 120LU);
UA_Int32 *variablenode_ns_0_i_114_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_0_i_114_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_0_i_114_variant_DataContents);
*variablenode_ns_0_i_114_variant_DataContents = (UA_Int32) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_114_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRule");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 114LU),UA_NODEID_NUMERIC(ns[0], 83LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "NamingRule"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_0_i_114_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_738_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 114LU));
}

/* Optional - ns=0;i=80 */

static UA_StatusCode function_namespace0_generated_739_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Optional");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 80LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_QUALIFIEDNAME(ns[0], "Optional"),UA_NODEID_NUMERIC(ns[0], 77LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11551LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11565LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11567LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11569LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11570LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11571LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11572LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11573LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11574LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2022LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3190LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 25432LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14493LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14499LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 16994LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 16997LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23622LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 16759LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14555LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14558LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17203LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17427LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17465LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14225LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15927LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17969LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17992LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 21094LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15303LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23797LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23800LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23802LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23805LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23811LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23814LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23816LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23819LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14645LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14646LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17633LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 16312LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 16598LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14432LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15115LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15118LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2366LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2367LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2370LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2371LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_739_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 80LU));
}

/* NamingRule - ns=0;i=113 */

static UA_StatusCode function_namespace0_generated_740_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 120LU);
UA_Int32 *variablenode_ns_0_i_113_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_0_i_113_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_0_i_113_variant_DataContents);
*variablenode_ns_0_i_113_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_113_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRule");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 113LU),UA_NODEID_NUMERIC(ns[0], 80LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "NamingRule"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_0_i_113_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_740_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 113LU));
}

/* Mandatory - ns=0;i=78 */

static UA_StatusCode function_namespace0_generated_741_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Mandatory");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 78LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_QUALIFIEDNAME(ns[0], "Mandatory"),UA_NODEID_NUMERIC(ns[0], 77LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12169LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2011LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2035LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 7611LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2021LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3116LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3117LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3118LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3119LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3120LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3121LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3122LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3124LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3125LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3126LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3127LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3128LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2023LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12142LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12152LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12143LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12144LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12145LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12146LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12147LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12148LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12149LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12150LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12151LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2027LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2028LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12098LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12099LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12100LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12101LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12102LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12103LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12104LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12105LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12106LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12107LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12108LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12109LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12110LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12111LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12112LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12113LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12114LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12115LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12116LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12117LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12118LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12119LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12120LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12121LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12122LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12123LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12124LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12125LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12126LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12127LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12128LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12129LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12130LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12131LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12132LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12133LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12134LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12135LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12136LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12137LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12138LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12139LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12140LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12141LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12861LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12862LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12863LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12864LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12865LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12866LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12867LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12868LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12869LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2744LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3129LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3130LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2025LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12817LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12818LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12819LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12820LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12821LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12822LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12823LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12824LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12825LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12826LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12827LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12828LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12829LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12830LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12831LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12832LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12833LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12834LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12835LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12836LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12837LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12838LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12839LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12840LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12841LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12842LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12843LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12844LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12845LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12846LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12847LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12848LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12849LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12850LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12851LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12852LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12853LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12854LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12855LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12856LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12857LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12858LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12859LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12780LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12781LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12782LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12783LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2166LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11697LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11698LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11699LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2151LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2152LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2153LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2154LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2155LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2156LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2157LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2159LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2160LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2161LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2162LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2163LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 7595LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 7597LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2030LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3131LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3132LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3133LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3134LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3135LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3136LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3137LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3138LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3139LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3140LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3141LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3142LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3143LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 8898LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11891LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3151LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3152LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3153LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3154LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3155LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3156LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3157LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3158LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3159LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3160LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3161LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3162LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3163LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3164LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3165LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3166LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3167LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3168LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3169LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3170LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3171LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3172LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3173LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3174LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3175LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3176LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3177LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3178LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2031LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3179LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3180LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3181LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3182LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3183LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3184LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3185LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3186LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3187LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2245LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2246LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2247LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2248LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2249LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2250LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2251LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2252LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3058LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2032LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12785LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12786LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12787LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12788LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12789LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12790LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12791LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12792LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12793LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12794LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12795LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12796LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12797LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12798LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12799LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12800LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12801LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12802LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12803LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12804LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12805LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12806LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12807LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12808LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12809LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12810LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12811LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12812LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12813LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12814LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12815LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2173LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2174LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2175LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2176LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2177LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 8888LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2179LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2180LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2181LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2182LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2183LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2184LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2185LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2186LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2187LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2188LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2189LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2190LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2191LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2998LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2193LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 8889LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 8890LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 8891LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 8892LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 8893LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 8894LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 8895LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 8896LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 8897LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 8902LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2198LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2199LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2200LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2201LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2202LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2203LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2204LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3050LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2205LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2206LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2207LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2208LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2209LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 8900LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11892LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2217LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2218LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2219LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2220LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2221LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2222LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2223LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2224LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2225LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2226LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2227LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2228LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2229LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2230LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2231LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2232LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2233LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2234LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2235LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2236LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2237LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2238LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2239LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2240LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2241LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2242LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2730LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2731LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2042LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2043LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2044LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2045LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2046LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2047LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2050LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2051LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17479LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14494LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14495LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14500LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 16995LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 16996LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17007LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14434LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15844LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15845LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14519LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15229LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14648LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15584LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14548LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14556LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14557LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14559LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14560LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17485LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14221LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17202LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 21146LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 21149LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14600LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14601LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17428LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17456LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17507LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17508LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14226LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17724LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15265LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15266LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17976LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17987LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17993LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17736LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17737LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17738LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17739LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17740LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17306LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17710LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15299LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15300LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 21092LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 21093LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17493LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15307LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15308LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23798LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23799LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23801LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23803LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23804LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23806LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23808LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23809LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23810LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23812LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23813LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23815LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23817LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23818LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23820LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23829LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23830LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23831LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17744LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17745LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17490LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17749LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17750LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14644LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17632LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14595LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14418LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17478LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14423LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15533LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 16599LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 16600LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14433LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17292LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17706LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 21083LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 21084LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 21086LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 21097LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 21098LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 21099LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 21100LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 21101LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 21102LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17494LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15311LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 21103LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15316LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15114LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15116LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15117LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15119LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 15120LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2369LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2374LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2375LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2377LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11241LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11461LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12078LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_741_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 78LU));
}

/* NamingRule - ns=0;i=112 */

static UA_StatusCode function_namespace0_generated_742_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 120LU);
UA_Int32 *variablenode_ns_0_i_112_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_0_i_112_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_0_i_112_variant_DataContents);
*variablenode_ns_0_i_112_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_112_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRule");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 112LU),UA_NODEID_NUMERIC(ns[0], 78LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "NamingRule"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_0_i_112_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_742_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 112LU));
}

/* MandatoryPlaceholder - ns=0;i=11510 */

static UA_StatusCode function_namespace0_generated_743_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MandatoryPlaceholder");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 11510LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_QUALIFIEDNAME(ns[0], "MandatoryPlaceholder"),UA_NODEID_NUMERIC(ns[0], 77LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_743_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11510LU));
}

/* NamingRule - ns=0;i=11511 */

static UA_StatusCode function_namespace0_generated_744_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 120LU);
UA_Int32 *variablenode_ns_0_i_11511_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_0_i_11511_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_0_i_11511_variant_DataContents);
*variablenode_ns_0_i_11511_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11511_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRule");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11511LU),UA_NODEID_NUMERIC(ns[0], 11510LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "NamingRule"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_0_i_11511_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_744_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11511LU));
}

/* OptionalPlaceholder - ns=0;i=11508 */

static UA_StatusCode function_namespace0_generated_745_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OptionalPlaceholder");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 11508LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_QUALIFIEDNAME(ns[0], "OptionalPlaceholder"),UA_NODEID_NUMERIC(ns[0], 77LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11508LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 12097LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11508LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14478LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11508LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17310LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11508LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23796LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11508LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 23807LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11508LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17743LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11508LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 14417LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11508LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17325LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 11508LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 18076LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_745_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11508LU));
}

/* NamingRule - ns=0;i=11509 */

static UA_StatusCode function_namespace0_generated_746_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 120LU);
UA_Int32 *variablenode_ns_0_i_11509_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_0_i_11509_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_0_i_11509_variant_DataContents);
*variablenode_ns_0_i_11509_variant_DataContents = (UA_Int32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_11509_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRule");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 11509LU),UA_NODEID_NUMERIC(ns[0], 11508LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "NamingRule"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_0_i_11509_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_746_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 11509LU));
}

/* NamingRule - ns=0;i=111 */

static UA_StatusCode function_namespace0_generated_747_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 120LU);
UA_Int32 *variablenode_ns_0_i_111_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_0_i_111_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_0_i_111_variant_DataContents);
*variablenode_ns_0_i_111_variant_DataContents = (UA_Int32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_111_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamingRule");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 111LU),UA_NODEID_NUMERIC(ns[0], 77LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "NamingRule"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_0_i_111_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 111LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace0_generated_747_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 111LU));
}

/* DataTypeEncodingType - ns=0;i=76 */

static UA_StatusCode function_namespace0_generated_748_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeEncodingType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 76LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "DataTypeEncodingType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_748_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 76LU));
}

/* Default Binary - ns=0;i=8251 */

static UA_StatusCode function_namespace0_generated_749_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 8251LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_QUALIFIEDNAME(ns[0], "Default Binary"),UA_NODEID_NUMERIC(ns[0], 76LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 8251LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 7594LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_749_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 8251LU));
}

/* Default Binary - ns=0;i=298 */

static UA_StatusCode function_namespace0_generated_750_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 298LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_QUALIFIEDNAME(ns[0], "Default Binary"),UA_NODEID_NUMERIC(ns[0], 76LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 298LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 296LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_750_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 298LU));
}

/* Default JSON - ns=0;i=15376 */

static UA_StatusCode function_namespace0_generated_751_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default JSON");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 15376LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_QUALIFIEDNAME(ns[0], "Default JSON"),UA_NODEID_NUMERIC(ns[0], 76LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 15376LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 887LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_751_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15376LU));
}

/* Default JSON - ns=0;i=15375 */

static UA_StatusCode function_namespace0_generated_752_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default JSON");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 15375LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_QUALIFIEDNAME(ns[0], "Default JSON"),UA_NODEID_NUMERIC(ns[0], 76LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 15375LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 884LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_752_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 15375LU));
}

/* DataTypeSystemType - ns=0;i=75 */

static UA_StatusCode function_namespace0_generated_753_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeSystemType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[0], 75LU),UA_NODEID_NUMERIC(ns[0], 58LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "DataTypeSystemType"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_753_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 75LU));
}

/* OPC Binary - ns=0;i=93 */

static UA_StatusCode function_namespace0_generated_754_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OPC Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 93LU),UA_NODEID_NUMERIC(ns[0], 90LU),UA_NODEID_NUMERIC(ns[0], 35LU),UA_QUALIFIEDNAME(ns[0], "OPC Binary"),UA_NODEID_NUMERIC(ns[0], 75LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_754_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 93LU));
}

/* XML Schema - ns=0;i=92 */

static UA_StatusCode function_namespace0_generated_755_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "XML Schema");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 92LU),UA_NODEID_NUMERIC(ns[0], 90LU),UA_NODEID_NUMERIC(ns[0], 35LU),UA_QUALIFIEDNAME(ns[0], "XML Schema"),UA_NODEID_NUMERIC(ns[0], 75LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_755_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 92LU));
}

/* DataTypeDictionaryType - ns=0;i=72 */

static UA_StatusCode function_namespace0_generated_756_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeDictionaryType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 72LU),UA_NODEID_NUMERIC(ns[0], 63LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "DataTypeDictionaryType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_756_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 72LU));
}

/* Opc.Ua - ns=0;i=7617 */



static UA_StatusCode function_namespace0_generated_757_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
UA_ByteString *variablenode_ns_0_i_7617_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_0_i_7617_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_0_i_7617_variant_DataContents);
variablenode_ns_0_i_7617_variant_DataContents->length = 177218;
variablenode_ns_0_i_7617_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_0_i_7617_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_7617_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Opc.Ua");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 7617LU),UA_NODEID_NUMERIC(ns[0], 93LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "Opc.Ua"),UA_NODEID_NUMERIC(ns[0], 72LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
variablenode_ns_0_i_7617_variant_DataContents->data = NULL;
variablenode_ns_0_i_7617_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_0_i_7617_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_757_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 7617LU));
}

/* NamespaceUri - ns=0;i=107 */

static UA_StatusCode function_namespace0_generated_758_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "A URI that uniquely identifies the dictionary.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 107LU),UA_NODEID_NUMERIC(ns[0], 72LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 107LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace0_generated_758_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 107LU));
}

/* DataTypeVersion - ns=0;i=106 */

static UA_StatusCode function_namespace0_generated_759_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 106LU),UA_NODEID_NUMERIC(ns[0], 72LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DataTypeVersion"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 106LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace0_generated_759_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 106LU));
}

/* DataTypeDescriptionType - ns=0;i=69 */

static UA_StatusCode function_namespace0_generated_760_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeDescriptionType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,UA_NODEID_NUMERIC(ns[0], 69LU),UA_NODEID_NUMERIC(ns[0], 63LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[0], "DataTypeDescriptionType"),UA_NODEID_NUMERIC(ns[0], 0LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_760_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 69LU));
}

/* EnumValueType - ns=0;i=7656 */

static UA_StatusCode function_namespace0_generated_761_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_0_i_7656_variant_DataContents =  UA_String_new();
if (!variablenode_ns_0_i_7656_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_0_i_7656_variant_DataContents);
*variablenode_ns_0_i_7656_variant_DataContents = UA_STRING_ALLOC("EnumValueType");
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_7656_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumValueType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 7656LU),UA_NODEID_NUMERIC(ns[0], 7617LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "EnumValueType"),UA_NODEID_NUMERIC(ns[0], 69LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_0_i_7656_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 7656LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 8251LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_761_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 7656LU));
}

/* Argument - ns=0;i=7650 */

static UA_StatusCode function_namespace0_generated_762_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_0_i_7650_variant_DataContents =  UA_String_new();
if (!variablenode_ns_0_i_7650_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_0_i_7650_variant_DataContents);
*variablenode_ns_0_i_7650_variant_DataContents = UA_STRING_ALLOC("Argument");
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_7650_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Argument");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 7650LU),UA_NODEID_NUMERIC(ns[0], 7617LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[0], "Argument"),UA_NODEID_NUMERIC(ns[0], 69LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_0_i_7650_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 7650LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 298LU), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_762_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 7650LU));
}

/* DictionaryFragment - ns=0;i=105 */

static UA_StatusCode function_namespace0_generated_763_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DictionaryFragment");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 105LU),UA_NODEID_NUMERIC(ns[0], 69LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DictionaryFragment"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 105LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace0_generated_763_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 105LU));
}

/* DataTypeVersion - ns=0;i=104 */

static UA_StatusCode function_namespace0_generated_764_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[0], 104LU),UA_NODEID_NUMERIC(ns[0], 69LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DataTypeVersion"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 104LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_namespace0_generated_764_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 104LU));
}

/* Default XML - ns=0;i=3063 */

static UA_StatusCode function_namespace0_generated_765_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 3063LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_QUALIFIEDNAME(ns[0], "Default XML"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_765_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3063LU));
}

/* Default Binary - ns=0;i=3062 */

static UA_StatusCode function_namespace0_generated_766_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[0], 3062LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_NODEID_NUMERIC(ns[0], 0LU),UA_QUALIFIEDNAME(ns[0], "Default Binary"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_766_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[0], 3062LU));
}

UA_StatusCode namespace0_generated(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[1];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");

/* Load custom datatype definitions into the server */
retVal |= function_namespace0_generated_0_begin(server, ns);
retVal |= function_namespace0_generated_0_finish(server, ns);
retVal |= function_namespace0_generated_1_begin(server, ns);
retVal |= function_namespace0_generated_1_finish(server, ns);
retVal |= function_namespace0_generated_2_begin(server, ns);
retVal |= function_namespace0_generated_2_finish(server, ns);
retVal |= function_namespace0_generated_3_begin(server, ns);
retVal |= function_namespace0_generated_3_finish(server, ns);
retVal |= function_namespace0_generated_4_begin(server, ns);
retVal |= function_namespace0_generated_4_finish(server, ns);
retVal |= function_namespace0_generated_5_begin(server, ns);
retVal |= function_namespace0_generated_5_finish(server, ns);
retVal |= function_namespace0_generated_6_begin(server, ns);
retVal |= function_namespace0_generated_6_finish(server, ns);
retVal |= function_namespace0_generated_7_begin(server, ns);
retVal |= function_namespace0_generated_7_finish(server, ns);
retVal |= function_namespace0_generated_8_begin(server, ns);
retVal |= function_namespace0_generated_8_finish(server, ns);
retVal |= function_namespace0_generated_9_begin(server, ns);
retVal |= function_namespace0_generated_9_finish(server, ns);
retVal |= function_namespace0_generated_10_begin(server, ns);
retVal |= function_namespace0_generated_11_begin(server, ns);
retVal |= function_namespace0_generated_12_begin(server, ns);
retVal |= function_namespace0_generated_13_begin(server, ns);
retVal |= function_namespace0_generated_14_begin(server, ns);
retVal |= function_namespace0_generated_15_begin(server, ns);
retVal |= function_namespace0_generated_16_begin(server, ns);
retVal |= function_namespace0_generated_17_begin(server, ns);
retVal |= function_namespace0_generated_18_begin(server, ns);
retVal |= function_namespace0_generated_19_begin(server, ns);
retVal |= function_namespace0_generated_20_begin(server, ns);
retVal |= function_namespace0_generated_21_begin(server, ns);
retVal |= function_namespace0_generated_22_begin(server, ns);
retVal |= function_namespace0_generated_23_begin(server, ns);
retVal |= function_namespace0_generated_24_begin(server, ns);
retVal |= function_namespace0_generated_25_begin(server, ns);
retVal |= function_namespace0_generated_26_begin(server, ns);
retVal |= function_namespace0_generated_27_begin(server, ns);
retVal |= function_namespace0_generated_28_begin(server, ns);
retVal |= function_namespace0_generated_29_begin(server, ns);
retVal |= function_namespace0_generated_30_begin(server, ns);
retVal |= function_namespace0_generated_31_begin(server, ns);
retVal |= function_namespace0_generated_32_begin(server, ns);
retVal |= function_namespace0_generated_33_begin(server, ns);
retVal |= function_namespace0_generated_34_begin(server, ns);
retVal |= function_namespace0_generated_35_begin(server, ns);
retVal |= function_namespace0_generated_36_begin(server, ns);
retVal |= function_namespace0_generated_37_begin(server, ns);
retVal |= function_namespace0_generated_38_begin(server, ns);
retVal |= function_namespace0_generated_39_begin(server, ns);
retVal |= function_namespace0_generated_40_begin(server, ns);
retVal |= function_namespace0_generated_41_begin(server, ns);
retVal |= function_namespace0_generated_42_begin(server, ns);
retVal |= function_namespace0_generated_43_begin(server, ns);
retVal |= function_namespace0_generated_44_begin(server, ns);
retVal |= function_namespace0_generated_45_begin(server, ns);
retVal |= function_namespace0_generated_46_begin(server, ns);
retVal |= function_namespace0_generated_47_begin(server, ns);
retVal |= function_namespace0_generated_48_begin(server, ns);
retVal |= function_namespace0_generated_49_begin(server, ns);
retVal |= function_namespace0_generated_50_begin(server, ns);
retVal |= function_namespace0_generated_51_begin(server, ns);
retVal |= function_namespace0_generated_52_begin(server, ns);
retVal |= function_namespace0_generated_53_begin(server, ns);
retVal |= function_namespace0_generated_54_begin(server, ns);
retVal |= function_namespace0_generated_55_begin(server, ns);
retVal |= function_namespace0_generated_56_begin(server, ns);
retVal |= function_namespace0_generated_57_begin(server, ns);
retVal |= function_namespace0_generated_58_begin(server, ns);
retVal |= function_namespace0_generated_59_begin(server, ns);
retVal |= function_namespace0_generated_60_begin(server, ns);
retVal |= function_namespace0_generated_61_begin(server, ns);
retVal |= function_namespace0_generated_62_begin(server, ns);
retVal |= function_namespace0_generated_63_begin(server, ns);
retVal |= function_namespace0_generated_64_begin(server, ns);
retVal |= function_namespace0_generated_65_begin(server, ns);
retVal |= function_namespace0_generated_66_begin(server, ns);
retVal |= function_namespace0_generated_67_begin(server, ns);
retVal |= function_namespace0_generated_68_begin(server, ns);
retVal |= function_namespace0_generated_69_begin(server, ns);
retVal |= function_namespace0_generated_70_begin(server, ns);
retVal |= function_namespace0_generated_71_begin(server, ns);
retVal |= function_namespace0_generated_72_begin(server, ns);
retVal |= function_namespace0_generated_73_begin(server, ns);
retVal |= function_namespace0_generated_74_begin(server, ns);
retVal |= function_namespace0_generated_75_begin(server, ns);
retVal |= function_namespace0_generated_76_begin(server, ns);
retVal |= function_namespace0_generated_77_begin(server, ns);
retVal |= function_namespace0_generated_78_begin(server, ns);
retVal |= function_namespace0_generated_79_begin(server, ns);
retVal |= function_namespace0_generated_80_begin(server, ns);
retVal |= function_namespace0_generated_81_begin(server, ns);
retVal |= function_namespace0_generated_82_begin(server, ns);
retVal |= function_namespace0_generated_83_begin(server, ns);
retVal |= function_namespace0_generated_84_begin(server, ns);
retVal |= function_namespace0_generated_85_begin(server, ns);
retVal |= function_namespace0_generated_86_begin(server, ns);
retVal |= function_namespace0_generated_87_begin(server, ns);
retVal |= function_namespace0_generated_88_begin(server, ns);
retVal |= function_namespace0_generated_89_begin(server, ns);
retVal |= function_namespace0_generated_90_begin(server, ns);
retVal |= function_namespace0_generated_91_begin(server, ns);
retVal |= function_namespace0_generated_92_begin(server, ns);
retVal |= function_namespace0_generated_93_begin(server, ns);
retVal |= function_namespace0_generated_94_begin(server, ns);
retVal |= function_namespace0_generated_95_begin(server, ns);
retVal |= function_namespace0_generated_96_begin(server, ns);
retVal |= function_namespace0_generated_97_begin(server, ns);
retVal |= function_namespace0_generated_98_begin(server, ns);
retVal |= function_namespace0_generated_99_begin(server, ns);
retVal |= function_namespace0_generated_100_begin(server, ns);
retVal |= function_namespace0_generated_101_begin(server, ns);
retVal |= function_namespace0_generated_102_begin(server, ns);
retVal |= function_namespace0_generated_103_begin(server, ns);
retVal |= function_namespace0_generated_104_begin(server, ns);
retVal |= function_namespace0_generated_105_begin(server, ns);
retVal |= function_namespace0_generated_106_begin(server, ns);
retVal |= function_namespace0_generated_107_begin(server, ns);
retVal |= function_namespace0_generated_108_begin(server, ns);
retVal |= function_namespace0_generated_109_begin(server, ns);
retVal |= function_namespace0_generated_110_begin(server, ns);
retVal |= function_namespace0_generated_111_begin(server, ns);
retVal |= function_namespace0_generated_112_begin(server, ns);
retVal |= function_namespace0_generated_113_begin(server, ns);
retVal |= function_namespace0_generated_114_begin(server, ns);
retVal |= function_namespace0_generated_115_begin(server, ns);
retVal |= function_namespace0_generated_116_begin(server, ns);
retVal |= function_namespace0_generated_117_begin(server, ns);
retVal |= function_namespace0_generated_118_begin(server, ns);
retVal |= function_namespace0_generated_119_begin(server, ns);
retVal |= function_namespace0_generated_120_begin(server, ns);
retVal |= function_namespace0_generated_121_begin(server, ns);
retVal |= function_namespace0_generated_122_begin(server, ns);
retVal |= function_namespace0_generated_123_begin(server, ns);
retVal |= function_namespace0_generated_124_begin(server, ns);
retVal |= function_namespace0_generated_125_begin(server, ns);
retVal |= function_namespace0_generated_126_begin(server, ns);
retVal |= function_namespace0_generated_127_begin(server, ns);
retVal |= function_namespace0_generated_128_begin(server, ns);
retVal |= function_namespace0_generated_129_begin(server, ns);
retVal |= function_namespace0_generated_130_begin(server, ns);
retVal |= function_namespace0_generated_131_begin(server, ns);
retVal |= function_namespace0_generated_132_begin(server, ns);
retVal |= function_namespace0_generated_133_begin(server, ns);
retVal |= function_namespace0_generated_134_begin(server, ns);
retVal |= function_namespace0_generated_135_begin(server, ns);
retVal |= function_namespace0_generated_136_begin(server, ns);
retVal |= function_namespace0_generated_137_begin(server, ns);
retVal |= function_namespace0_generated_138_begin(server, ns);
retVal |= function_namespace0_generated_139_begin(server, ns);
retVal |= function_namespace0_generated_140_begin(server, ns);
retVal |= function_namespace0_generated_141_begin(server, ns);
retVal |= function_namespace0_generated_142_begin(server, ns);
retVal |= function_namespace0_generated_143_begin(server, ns);
retVal |= function_namespace0_generated_144_begin(server, ns);
retVal |= function_namespace0_generated_145_begin(server, ns);
retVal |= function_namespace0_generated_146_begin(server, ns);
retVal |= function_namespace0_generated_147_begin(server, ns);
retVal |= function_namespace0_generated_148_begin(server, ns);
retVal |= function_namespace0_generated_149_begin(server, ns);
retVal |= function_namespace0_generated_150_begin(server, ns);
retVal |= function_namespace0_generated_151_begin(server, ns);
retVal |= function_namespace0_generated_152_begin(server, ns);
retVal |= function_namespace0_generated_153_begin(server, ns);
retVal |= function_namespace0_generated_154_begin(server, ns);
retVal |= function_namespace0_generated_155_begin(server, ns);
retVal |= function_namespace0_generated_156_begin(server, ns);
retVal |= function_namespace0_generated_157_begin(server, ns);
retVal |= function_namespace0_generated_158_begin(server, ns);
retVal |= function_namespace0_generated_159_begin(server, ns);
retVal |= function_namespace0_generated_160_begin(server, ns);
retVal |= function_namespace0_generated_161_begin(server, ns);
retVal |= function_namespace0_generated_162_begin(server, ns);
retVal |= function_namespace0_generated_163_begin(server, ns);
retVal |= function_namespace0_generated_164_begin(server, ns);
retVal |= function_namespace0_generated_165_begin(server, ns);
retVal |= function_namespace0_generated_166_begin(server, ns);
retVal |= function_namespace0_generated_167_begin(server, ns);
retVal |= function_namespace0_generated_168_begin(server, ns);
retVal |= function_namespace0_generated_169_begin(server, ns);
retVal |= function_namespace0_generated_170_begin(server, ns);
retVal |= function_namespace0_generated_171_begin(server, ns);
retVal |= function_namespace0_generated_172_begin(server, ns);
retVal |= function_namespace0_generated_173_begin(server, ns);
retVal |= function_namespace0_generated_174_begin(server, ns);
retVal |= function_namespace0_generated_175_begin(server, ns);
retVal |= function_namespace0_generated_176_begin(server, ns);
retVal |= function_namespace0_generated_177_begin(server, ns);
retVal |= function_namespace0_generated_178_begin(server, ns);
retVal |= function_namespace0_generated_179_begin(server, ns);
retVal |= function_namespace0_generated_180_begin(server, ns);
retVal |= function_namespace0_generated_181_begin(server, ns);
retVal |= function_namespace0_generated_182_begin(server, ns);
retVal |= function_namespace0_generated_183_begin(server, ns);
retVal |= function_namespace0_generated_184_begin(server, ns);
retVal |= function_namespace0_generated_185_begin(server, ns);
retVal |= function_namespace0_generated_186_begin(server, ns);
retVal |= function_namespace0_generated_187_begin(server, ns);
retVal |= function_namespace0_generated_188_begin(server, ns);
retVal |= function_namespace0_generated_189_begin(server, ns);
retVal |= function_namespace0_generated_190_begin(server, ns);
retVal |= function_namespace0_generated_191_begin(server, ns);
retVal |= function_namespace0_generated_192_begin(server, ns);
retVal |= function_namespace0_generated_193_begin(server, ns);
retVal |= function_namespace0_generated_194_begin(server, ns);
retVal |= function_namespace0_generated_195_begin(server, ns);
retVal |= function_namespace0_generated_196_begin(server, ns);
retVal |= function_namespace0_generated_197_begin(server, ns);
retVal |= function_namespace0_generated_198_begin(server, ns);
retVal |= function_namespace0_generated_199_begin(server, ns);
retVal |= function_namespace0_generated_200_begin(server, ns);
retVal |= function_namespace0_generated_201_begin(server, ns);
retVal |= function_namespace0_generated_202_begin(server, ns);
retVal |= function_namespace0_generated_203_begin(server, ns);
retVal |= function_namespace0_generated_204_begin(server, ns);
retVal |= function_namespace0_generated_205_begin(server, ns);
retVal |= function_namespace0_generated_206_begin(server, ns);
retVal |= function_namespace0_generated_207_begin(server, ns);
retVal |= function_namespace0_generated_208_begin(server, ns);
retVal |= function_namespace0_generated_209_begin(server, ns);
retVal |= function_namespace0_generated_210_begin(server, ns);
retVal |= function_namespace0_generated_211_begin(server, ns);
retVal |= function_namespace0_generated_212_begin(server, ns);
retVal |= function_namespace0_generated_213_begin(server, ns);
retVal |= function_namespace0_generated_214_begin(server, ns);
retVal |= function_namespace0_generated_215_begin(server, ns);
retVal |= function_namespace0_generated_216_begin(server, ns);
retVal |= function_namespace0_generated_217_begin(server, ns);
retVal |= function_namespace0_generated_218_begin(server, ns);
retVal |= function_namespace0_generated_219_begin(server, ns);
retVal |= function_namespace0_generated_220_begin(server, ns);
retVal |= function_namespace0_generated_221_begin(server, ns);
retVal |= function_namespace0_generated_222_begin(server, ns);
retVal |= function_namespace0_generated_223_begin(server, ns);
retVal |= function_namespace0_generated_224_begin(server, ns);
retVal |= function_namespace0_generated_225_begin(server, ns);
retVal |= function_namespace0_generated_226_begin(server, ns);
retVal |= function_namespace0_generated_227_begin(server, ns);
retVal |= function_namespace0_generated_228_begin(server, ns);
retVal |= function_namespace0_generated_229_begin(server, ns);
retVal |= function_namespace0_generated_230_begin(server, ns);
retVal |= function_namespace0_generated_231_begin(server, ns);
retVal |= function_namespace0_generated_232_begin(server, ns);
retVal |= function_namespace0_generated_233_begin(server, ns);
retVal |= function_namespace0_generated_234_begin(server, ns);
retVal |= function_namespace0_generated_235_begin(server, ns);
retVal |= function_namespace0_generated_236_begin(server, ns);
retVal |= function_namespace0_generated_237_begin(server, ns);
retVal |= function_namespace0_generated_238_begin(server, ns);
retVal |= function_namespace0_generated_239_begin(server, ns);
retVal |= function_namespace0_generated_240_begin(server, ns);
retVal |= function_namespace0_generated_241_begin(server, ns);
retVal |= function_namespace0_generated_242_begin(server, ns);
retVal |= function_namespace0_generated_243_begin(server, ns);
retVal |= function_namespace0_generated_244_begin(server, ns);
retVal |= function_namespace0_generated_245_begin(server, ns);
retVal |= function_namespace0_generated_246_begin(server, ns);
retVal |= function_namespace0_generated_247_begin(server, ns);
retVal |= function_namespace0_generated_248_begin(server, ns);
retVal |= function_namespace0_generated_249_begin(server, ns);
retVal |= function_namespace0_generated_250_begin(server, ns);
retVal |= function_namespace0_generated_251_begin(server, ns);
retVal |= function_namespace0_generated_252_begin(server, ns);
retVal |= function_namespace0_generated_253_begin(server, ns);
retVal |= function_namespace0_generated_254_begin(server, ns);
retVal |= function_namespace0_generated_255_begin(server, ns);
retVal |= function_namespace0_generated_256_begin(server, ns);
retVal |= function_namespace0_generated_257_begin(server, ns);
retVal |= function_namespace0_generated_258_begin(server, ns);
retVal |= function_namespace0_generated_259_begin(server, ns);
retVal |= function_namespace0_generated_260_begin(server, ns);
retVal |= function_namespace0_generated_261_begin(server, ns);
retVal |= function_namespace0_generated_262_begin(server, ns);
retVal |= function_namespace0_generated_263_begin(server, ns);
retVal |= function_namespace0_generated_264_begin(server, ns);
retVal |= function_namespace0_generated_265_begin(server, ns);
retVal |= function_namespace0_generated_266_begin(server, ns);
retVal |= function_namespace0_generated_267_begin(server, ns);
retVal |= function_namespace0_generated_268_begin(server, ns);
retVal |= function_namespace0_generated_269_begin(server, ns);
retVal |= function_namespace0_generated_270_begin(server, ns);
retVal |= function_namespace0_generated_271_begin(server, ns);
retVal |= function_namespace0_generated_272_begin(server, ns);
retVal |= function_namespace0_generated_273_begin(server, ns);
retVal |= function_namespace0_generated_274_begin(server, ns);
retVal |= function_namespace0_generated_275_begin(server, ns);
retVal |= function_namespace0_generated_276_begin(server, ns);
retVal |= function_namespace0_generated_277_begin(server, ns);
retVal |= function_namespace0_generated_278_begin(server, ns);
retVal |= function_namespace0_generated_279_begin(server, ns);
retVal |= function_namespace0_generated_280_begin(server, ns);
retVal |= function_namespace0_generated_281_begin(server, ns);
retVal |= function_namespace0_generated_282_begin(server, ns);
retVal |= function_namespace0_generated_283_begin(server, ns);
retVal |= function_namespace0_generated_284_begin(server, ns);
retVal |= function_namespace0_generated_285_begin(server, ns);
retVal |= function_namespace0_generated_286_begin(server, ns);
retVal |= function_namespace0_generated_287_begin(server, ns);
retVal |= function_namespace0_generated_288_begin(server, ns);
retVal |= function_namespace0_generated_289_begin(server, ns);
retVal |= function_namespace0_generated_290_begin(server, ns);
retVal |= function_namespace0_generated_291_begin(server, ns);
retVal |= function_namespace0_generated_292_begin(server, ns);
retVal |= function_namespace0_generated_293_begin(server, ns);
retVal |= function_namespace0_generated_294_begin(server, ns);
retVal |= function_namespace0_generated_295_begin(server, ns);
retVal |= function_namespace0_generated_296_begin(server, ns);
retVal |= function_namespace0_generated_297_begin(server, ns);
retVal |= function_namespace0_generated_298_begin(server, ns);
retVal |= function_namespace0_generated_299_begin(server, ns);
retVal |= function_namespace0_generated_300_begin(server, ns);
retVal |= function_namespace0_generated_301_begin(server, ns);
retVal |= function_namespace0_generated_302_begin(server, ns);
retVal |= function_namespace0_generated_303_begin(server, ns);
retVal |= function_namespace0_generated_304_begin(server, ns);
retVal |= function_namespace0_generated_305_begin(server, ns);
retVal |= function_namespace0_generated_306_begin(server, ns);
retVal |= function_namespace0_generated_307_begin(server, ns);
retVal |= function_namespace0_generated_308_begin(server, ns);
retVal |= function_namespace0_generated_309_begin(server, ns);
retVal |= function_namespace0_generated_310_begin(server, ns);
retVal |= function_namespace0_generated_311_begin(server, ns);
retVal |= function_namespace0_generated_312_begin(server, ns);
retVal |= function_namespace0_generated_313_begin(server, ns);
retVal |= function_namespace0_generated_314_begin(server, ns);
retVal |= function_namespace0_generated_315_begin(server, ns);
retVal |= function_namespace0_generated_316_begin(server, ns);
retVal |= function_namespace0_generated_317_begin(server, ns);
retVal |= function_namespace0_generated_318_begin(server, ns);
retVal |= function_namespace0_generated_319_begin(server, ns);
retVal |= function_namespace0_generated_320_begin(server, ns);
retVal |= function_namespace0_generated_321_begin(server, ns);
retVal |= function_namespace0_generated_322_begin(server, ns);
retVal |= function_namespace0_generated_323_begin(server, ns);
retVal |= function_namespace0_generated_324_begin(server, ns);
retVal |= function_namespace0_generated_325_begin(server, ns);
retVal |= function_namespace0_generated_326_begin(server, ns);
retVal |= function_namespace0_generated_327_begin(server, ns);
retVal |= function_namespace0_generated_328_begin(server, ns);
retVal |= function_namespace0_generated_329_begin(server, ns);
retVal |= function_namespace0_generated_330_begin(server, ns);
retVal |= function_namespace0_generated_331_begin(server, ns);
retVal |= function_namespace0_generated_332_begin(server, ns);
retVal |= function_namespace0_generated_333_begin(server, ns);
retVal |= function_namespace0_generated_334_begin(server, ns);
retVal |= function_namespace0_generated_335_begin(server, ns);
retVal |= function_namespace0_generated_336_begin(server, ns);
retVal |= function_namespace0_generated_337_begin(server, ns);
retVal |= function_namespace0_generated_338_begin(server, ns);
retVal |= function_namespace0_generated_339_begin(server, ns);
retVal |= function_namespace0_generated_340_begin(server, ns);
retVal |= function_namespace0_generated_341_begin(server, ns);
retVal |= function_namespace0_generated_342_begin(server, ns);
retVal |= function_namespace0_generated_343_begin(server, ns);
retVal |= function_namespace0_generated_344_begin(server, ns);
retVal |= function_namespace0_generated_345_begin(server, ns);
retVal |= function_namespace0_generated_346_begin(server, ns);
retVal |= function_namespace0_generated_347_begin(server, ns);
retVal |= function_namespace0_generated_348_begin(server, ns);
retVal |= function_namespace0_generated_349_begin(server, ns);
retVal |= function_namespace0_generated_350_begin(server, ns);
retVal |= function_namespace0_generated_351_begin(server, ns);
retVal |= function_namespace0_generated_352_begin(server, ns);
retVal |= function_namespace0_generated_353_begin(server, ns);
retVal |= function_namespace0_generated_354_begin(server, ns);
retVal |= function_namespace0_generated_355_begin(server, ns);
retVal |= function_namespace0_generated_356_begin(server, ns);
retVal |= function_namespace0_generated_357_begin(server, ns);
retVal |= function_namespace0_generated_358_begin(server, ns);
retVal |= function_namespace0_generated_359_begin(server, ns);
retVal |= function_namespace0_generated_360_begin(server, ns);
retVal |= function_namespace0_generated_361_begin(server, ns);
retVal |= function_namespace0_generated_362_begin(server, ns);
retVal |= function_namespace0_generated_363_begin(server, ns);
retVal |= function_namespace0_generated_364_begin(server, ns);
retVal |= function_namespace0_generated_365_begin(server, ns);
retVal |= function_namespace0_generated_366_begin(server, ns);
retVal |= function_namespace0_generated_367_begin(server, ns);
retVal |= function_namespace0_generated_368_begin(server, ns);
retVal |= function_namespace0_generated_369_begin(server, ns);
retVal |= function_namespace0_generated_370_begin(server, ns);
retVal |= function_namespace0_generated_371_begin(server, ns);
retVal |= function_namespace0_generated_372_begin(server, ns);
retVal |= function_namespace0_generated_373_begin(server, ns);
retVal |= function_namespace0_generated_374_begin(server, ns);
retVal |= function_namespace0_generated_375_begin(server, ns);
retVal |= function_namespace0_generated_376_begin(server, ns);
retVal |= function_namespace0_generated_377_begin(server, ns);
retVal |= function_namespace0_generated_378_begin(server, ns);
retVal |= function_namespace0_generated_379_begin(server, ns);
retVal |= function_namespace0_generated_380_begin(server, ns);
retVal |= function_namespace0_generated_381_begin(server, ns);
retVal |= function_namespace0_generated_382_begin(server, ns);
retVal |= function_namespace0_generated_383_begin(server, ns);
retVal |= function_namespace0_generated_384_begin(server, ns);
retVal |= function_namespace0_generated_385_begin(server, ns);
retVal |= function_namespace0_generated_386_begin(server, ns);
retVal |= function_namespace0_generated_387_begin(server, ns);
retVal |= function_namespace0_generated_388_begin(server, ns);
retVal |= function_namespace0_generated_389_begin(server, ns);
retVal |= function_namespace0_generated_390_begin(server, ns);
retVal |= function_namespace0_generated_391_begin(server, ns);
retVal |= function_namespace0_generated_392_begin(server, ns);
retVal |= function_namespace0_generated_393_begin(server, ns);
retVal |= function_namespace0_generated_394_begin(server, ns);
retVal |= function_namespace0_generated_395_begin(server, ns);
retVal |= function_namespace0_generated_396_begin(server, ns);
retVal |= function_namespace0_generated_397_begin(server, ns);
retVal |= function_namespace0_generated_398_begin(server, ns);
retVal |= function_namespace0_generated_399_begin(server, ns);
retVal |= function_namespace0_generated_400_begin(server, ns);
retVal |= function_namespace0_generated_401_begin(server, ns);
retVal |= function_namespace0_generated_402_begin(server, ns);
retVal |= function_namespace0_generated_403_begin(server, ns);
retVal |= function_namespace0_generated_404_begin(server, ns);
retVal |= function_namespace0_generated_405_begin(server, ns);
retVal |= function_namespace0_generated_406_begin(server, ns);
retVal |= function_namespace0_generated_407_begin(server, ns);
retVal |= function_namespace0_generated_408_begin(server, ns);
retVal |= function_namespace0_generated_409_begin(server, ns);
retVal |= function_namespace0_generated_410_begin(server, ns);
retVal |= function_namespace0_generated_411_begin(server, ns);
retVal |= function_namespace0_generated_412_begin(server, ns);
retVal |= function_namespace0_generated_413_begin(server, ns);
retVal |= function_namespace0_generated_414_begin(server, ns);
retVal |= function_namespace0_generated_415_begin(server, ns);
retVal |= function_namespace0_generated_416_begin(server, ns);
retVal |= function_namespace0_generated_417_begin(server, ns);
retVal |= function_namespace0_generated_418_begin(server, ns);
retVal |= function_namespace0_generated_419_begin(server, ns);
retVal |= function_namespace0_generated_420_begin(server, ns);
retVal |= function_namespace0_generated_421_begin(server, ns);
retVal |= function_namespace0_generated_422_begin(server, ns);
retVal |= function_namespace0_generated_423_begin(server, ns);
retVal |= function_namespace0_generated_424_begin(server, ns);
retVal |= function_namespace0_generated_425_begin(server, ns);
retVal |= function_namespace0_generated_426_begin(server, ns);
retVal |= function_namespace0_generated_427_begin(server, ns);
retVal |= function_namespace0_generated_428_begin(server, ns);
retVal |= function_namespace0_generated_429_begin(server, ns);
retVal |= function_namespace0_generated_430_begin(server, ns);
retVal |= function_namespace0_generated_431_begin(server, ns);
retVal |= function_namespace0_generated_432_begin(server, ns);
retVal |= function_namespace0_generated_433_begin(server, ns);
retVal |= function_namespace0_generated_434_begin(server, ns);
retVal |= function_namespace0_generated_435_begin(server, ns);
retVal |= function_namespace0_generated_436_begin(server, ns);
retVal |= function_namespace0_generated_437_begin(server, ns);
retVal |= function_namespace0_generated_438_begin(server, ns);
retVal |= function_namespace0_generated_439_begin(server, ns);
retVal |= function_namespace0_generated_440_begin(server, ns);
retVal |= function_namespace0_generated_441_begin(server, ns);
retVal |= function_namespace0_generated_442_begin(server, ns);
retVal |= function_namespace0_generated_443_begin(server, ns);
retVal |= function_namespace0_generated_444_begin(server, ns);
retVal |= function_namespace0_generated_445_begin(server, ns);
retVal |= function_namespace0_generated_446_begin(server, ns);
retVal |= function_namespace0_generated_447_begin(server, ns);
retVal |= function_namespace0_generated_448_begin(server, ns);
retVal |= function_namespace0_generated_449_begin(server, ns);
retVal |= function_namespace0_generated_450_begin(server, ns);
retVal |= function_namespace0_generated_451_begin(server, ns);
retVal |= function_namespace0_generated_452_begin(server, ns);
retVal |= function_namespace0_generated_453_begin(server, ns);
retVal |= function_namespace0_generated_454_begin(server, ns);
retVal |= function_namespace0_generated_455_begin(server, ns);
retVal |= function_namespace0_generated_456_begin(server, ns);
retVal |= function_namespace0_generated_457_begin(server, ns);
retVal |= function_namespace0_generated_458_begin(server, ns);
retVal |= function_namespace0_generated_459_begin(server, ns);
retVal |= function_namespace0_generated_460_begin(server, ns);
retVal |= function_namespace0_generated_461_begin(server, ns);
retVal |= function_namespace0_generated_462_begin(server, ns);
retVal |= function_namespace0_generated_463_begin(server, ns);
retVal |= function_namespace0_generated_464_begin(server, ns);
retVal |= function_namespace0_generated_465_begin(server, ns);
retVal |= function_namespace0_generated_466_begin(server, ns);
retVal |= function_namespace0_generated_467_begin(server, ns);
retVal |= function_namespace0_generated_468_begin(server, ns);
retVal |= function_namespace0_generated_469_begin(server, ns);
retVal |= function_namespace0_generated_470_begin(server, ns);
retVal |= function_namespace0_generated_471_begin(server, ns);
retVal |= function_namespace0_generated_472_begin(server, ns);
retVal |= function_namespace0_generated_473_begin(server, ns);
retVal |= function_namespace0_generated_474_begin(server, ns);
retVal |= function_namespace0_generated_475_begin(server, ns);
retVal |= function_namespace0_generated_476_begin(server, ns);
retVal |= function_namespace0_generated_477_begin(server, ns);
retVal |= function_namespace0_generated_478_begin(server, ns);
retVal |= function_namespace0_generated_479_begin(server, ns);
retVal |= function_namespace0_generated_480_begin(server, ns);
retVal |= function_namespace0_generated_481_begin(server, ns);
retVal |= function_namespace0_generated_482_begin(server, ns);
retVal |= function_namespace0_generated_483_begin(server, ns);
retVal |= function_namespace0_generated_484_begin(server, ns);
retVal |= function_namespace0_generated_485_begin(server, ns);
retVal |= function_namespace0_generated_486_begin(server, ns);
retVal |= function_namespace0_generated_487_begin(server, ns);
retVal |= function_namespace0_generated_488_begin(server, ns);
retVal |= function_namespace0_generated_489_begin(server, ns);
retVal |= function_namespace0_generated_490_begin(server, ns);
retVal |= function_namespace0_generated_491_begin(server, ns);
retVal |= function_namespace0_generated_492_begin(server, ns);
retVal |= function_namespace0_generated_493_begin(server, ns);
retVal |= function_namespace0_generated_494_begin(server, ns);
retVal |= function_namespace0_generated_495_begin(server, ns);
retVal |= function_namespace0_generated_496_begin(server, ns);
retVal |= function_namespace0_generated_497_begin(server, ns);
retVal |= function_namespace0_generated_498_begin(server, ns);
retVal |= function_namespace0_generated_499_begin(server, ns);
retVal |= function_namespace0_generated_500_begin(server, ns);
retVal |= function_namespace0_generated_501_begin(server, ns);
retVal |= function_namespace0_generated_502_begin(server, ns);
retVal |= function_namespace0_generated_503_begin(server, ns);
retVal |= function_namespace0_generated_504_begin(server, ns);
retVal |= function_namespace0_generated_505_begin(server, ns);
retVal |= function_namespace0_generated_506_begin(server, ns);
retVal |= function_namespace0_generated_507_begin(server, ns);
retVal |= function_namespace0_generated_508_begin(server, ns);
retVal |= function_namespace0_generated_509_begin(server, ns);
retVal |= function_namespace0_generated_510_begin(server, ns);
retVal |= function_namespace0_generated_511_begin(server, ns);
retVal |= function_namespace0_generated_512_begin(server, ns);
retVal |= function_namespace0_generated_513_begin(server, ns);
retVal |= function_namespace0_generated_514_begin(server, ns);
retVal |= function_namespace0_generated_515_begin(server, ns);
retVal |= function_namespace0_generated_516_begin(server, ns);
retVal |= function_namespace0_generated_517_begin(server, ns);
retVal |= function_namespace0_generated_518_begin(server, ns);
retVal |= function_namespace0_generated_519_begin(server, ns);
retVal |= function_namespace0_generated_520_begin(server, ns);
retVal |= function_namespace0_generated_521_begin(server, ns);
retVal |= function_namespace0_generated_522_begin(server, ns);
retVal |= function_namespace0_generated_523_begin(server, ns);
retVal |= function_namespace0_generated_524_begin(server, ns);
retVal |= function_namespace0_generated_525_begin(server, ns);
retVal |= function_namespace0_generated_526_begin(server, ns);
retVal |= function_namespace0_generated_527_begin(server, ns);
retVal |= function_namespace0_generated_528_begin(server, ns);
retVal |= function_namespace0_generated_529_begin(server, ns);
retVal |= function_namespace0_generated_530_begin(server, ns);
retVal |= function_namespace0_generated_531_begin(server, ns);
retVal |= function_namespace0_generated_532_begin(server, ns);
retVal |= function_namespace0_generated_533_begin(server, ns);
retVal |= function_namespace0_generated_534_begin(server, ns);
retVal |= function_namespace0_generated_535_begin(server, ns);
retVal |= function_namespace0_generated_536_begin(server, ns);
retVal |= function_namespace0_generated_537_begin(server, ns);
retVal |= function_namespace0_generated_538_begin(server, ns);
retVal |= function_namespace0_generated_539_begin(server, ns);
retVal |= function_namespace0_generated_540_begin(server, ns);
retVal |= function_namespace0_generated_541_begin(server, ns);
retVal |= function_namespace0_generated_542_begin(server, ns);
retVal |= function_namespace0_generated_543_begin(server, ns);
retVal |= function_namespace0_generated_544_begin(server, ns);
retVal |= function_namespace0_generated_545_begin(server, ns);
retVal |= function_namespace0_generated_546_begin(server, ns);
retVal |= function_namespace0_generated_547_begin(server, ns);
retVal |= function_namespace0_generated_548_begin(server, ns);
retVal |= function_namespace0_generated_549_begin(server, ns);
retVal |= function_namespace0_generated_550_begin(server, ns);
retVal |= function_namespace0_generated_551_begin(server, ns);
retVal |= function_namespace0_generated_552_begin(server, ns);
retVal |= function_namespace0_generated_553_begin(server, ns);
retVal |= function_namespace0_generated_554_begin(server, ns);
retVal |= function_namespace0_generated_555_begin(server, ns);
retVal |= function_namespace0_generated_556_begin(server, ns);
retVal |= function_namespace0_generated_557_begin(server, ns);
retVal |= function_namespace0_generated_558_begin(server, ns);
retVal |= function_namespace0_generated_559_begin(server, ns);
retVal |= function_namespace0_generated_560_begin(server, ns);
retVal |= function_namespace0_generated_561_begin(server, ns);
retVal |= function_namespace0_generated_562_begin(server, ns);
retVal |= function_namespace0_generated_563_begin(server, ns);
retVal |= function_namespace0_generated_564_begin(server, ns);
retVal |= function_namespace0_generated_565_begin(server, ns);
retVal |= function_namespace0_generated_566_begin(server, ns);
retVal |= function_namespace0_generated_567_begin(server, ns);
retVal |= function_namespace0_generated_568_begin(server, ns);
retVal |= function_namespace0_generated_569_begin(server, ns);
retVal |= function_namespace0_generated_570_begin(server, ns);
retVal |= function_namespace0_generated_571_begin(server, ns);
retVal |= function_namespace0_generated_572_begin(server, ns);
retVal |= function_namespace0_generated_573_begin(server, ns);
retVal |= function_namespace0_generated_574_begin(server, ns);
retVal |= function_namespace0_generated_575_begin(server, ns);
retVal |= function_namespace0_generated_576_begin(server, ns);
retVal |= function_namespace0_generated_577_begin(server, ns);
retVal |= function_namespace0_generated_578_begin(server, ns);
retVal |= function_namespace0_generated_579_begin(server, ns);
retVal |= function_namespace0_generated_580_begin(server, ns);
retVal |= function_namespace0_generated_581_begin(server, ns);
retVal |= function_namespace0_generated_582_begin(server, ns);
retVal |= function_namespace0_generated_583_begin(server, ns);
retVal |= function_namespace0_generated_584_begin(server, ns);
retVal |= function_namespace0_generated_585_begin(server, ns);
retVal |= function_namespace0_generated_586_begin(server, ns);
retVal |= function_namespace0_generated_587_begin(server, ns);
retVal |= function_namespace0_generated_588_begin(server, ns);
retVal |= function_namespace0_generated_589_begin(server, ns);
retVal |= function_namespace0_generated_590_begin(server, ns);
retVal |= function_namespace0_generated_591_begin(server, ns);
retVal |= function_namespace0_generated_592_begin(server, ns);
retVal |= function_namespace0_generated_593_begin(server, ns);
retVal |= function_namespace0_generated_594_begin(server, ns);
retVal |= function_namespace0_generated_595_begin(server, ns);
retVal |= function_namespace0_generated_596_begin(server, ns);
retVal |= function_namespace0_generated_597_begin(server, ns);
retVal |= function_namespace0_generated_598_begin(server, ns);
retVal |= function_namespace0_generated_599_begin(server, ns);
retVal |= function_namespace0_generated_600_begin(server, ns);
retVal |= function_namespace0_generated_601_begin(server, ns);
retVal |= function_namespace0_generated_602_begin(server, ns);
retVal |= function_namespace0_generated_603_begin(server, ns);
retVal |= function_namespace0_generated_604_begin(server, ns);
retVal |= function_namespace0_generated_605_begin(server, ns);
retVal |= function_namespace0_generated_606_begin(server, ns);
retVal |= function_namespace0_generated_607_begin(server, ns);
retVal |= function_namespace0_generated_608_begin(server, ns);
retVal |= function_namespace0_generated_609_begin(server, ns);
retVal |= function_namespace0_generated_610_begin(server, ns);
retVal |= function_namespace0_generated_611_begin(server, ns);
retVal |= function_namespace0_generated_612_begin(server, ns);
retVal |= function_namespace0_generated_613_begin(server, ns);
retVal |= function_namespace0_generated_614_begin(server, ns);
retVal |= function_namespace0_generated_615_begin(server, ns);
retVal |= function_namespace0_generated_616_begin(server, ns);
retVal |= function_namespace0_generated_617_begin(server, ns);
retVal |= function_namespace0_generated_618_begin(server, ns);
retVal |= function_namespace0_generated_619_begin(server, ns);
retVal |= function_namespace0_generated_620_begin(server, ns);
retVal |= function_namespace0_generated_621_begin(server, ns);
retVal |= function_namespace0_generated_622_begin(server, ns);
retVal |= function_namespace0_generated_623_begin(server, ns);
retVal |= function_namespace0_generated_624_begin(server, ns);
retVal |= function_namespace0_generated_625_begin(server, ns);
retVal |= function_namespace0_generated_626_begin(server, ns);
retVal |= function_namespace0_generated_627_begin(server, ns);
retVal |= function_namespace0_generated_628_begin(server, ns);
retVal |= function_namespace0_generated_629_begin(server, ns);
retVal |= function_namespace0_generated_630_begin(server, ns);
retVal |= function_namespace0_generated_631_begin(server, ns);
retVal |= function_namespace0_generated_632_begin(server, ns);
retVal |= function_namespace0_generated_633_begin(server, ns);
retVal |= function_namespace0_generated_634_begin(server, ns);
retVal |= function_namespace0_generated_635_begin(server, ns);
retVal |= function_namespace0_generated_636_begin(server, ns);
retVal |= function_namespace0_generated_637_begin(server, ns);
retVal |= function_namespace0_generated_638_begin(server, ns);
retVal |= function_namespace0_generated_639_begin(server, ns);
retVal |= function_namespace0_generated_640_begin(server, ns);
retVal |= function_namespace0_generated_641_begin(server, ns);
retVal |= function_namespace0_generated_642_begin(server, ns);
retVal |= function_namespace0_generated_643_begin(server, ns);
retVal |= function_namespace0_generated_644_begin(server, ns);
retVal |= function_namespace0_generated_645_begin(server, ns);
retVal |= function_namespace0_generated_646_begin(server, ns);
retVal |= function_namespace0_generated_647_begin(server, ns);
retVal |= function_namespace0_generated_648_begin(server, ns);
retVal |= function_namespace0_generated_649_begin(server, ns);
retVal |= function_namespace0_generated_650_begin(server, ns);
retVal |= function_namespace0_generated_651_begin(server, ns);
retVal |= function_namespace0_generated_652_begin(server, ns);
retVal |= function_namespace0_generated_653_begin(server, ns);
retVal |= function_namespace0_generated_654_begin(server, ns);
retVal |= function_namespace0_generated_655_begin(server, ns);
retVal |= function_namespace0_generated_656_begin(server, ns);
retVal |= function_namespace0_generated_657_begin(server, ns);
retVal |= function_namespace0_generated_658_begin(server, ns);
retVal |= function_namespace0_generated_659_begin(server, ns);
retVal |= function_namespace0_generated_660_begin(server, ns);
retVal |= function_namespace0_generated_661_begin(server, ns);
retVal |= function_namespace0_generated_662_begin(server, ns);
retVal |= function_namespace0_generated_663_begin(server, ns);
retVal |= function_namespace0_generated_664_begin(server, ns);
retVal |= function_namespace0_generated_665_begin(server, ns);
retVal |= function_namespace0_generated_666_begin(server, ns);
retVal |= function_namespace0_generated_667_begin(server, ns);
retVal |= function_namespace0_generated_668_begin(server, ns);
retVal |= function_namespace0_generated_669_begin(server, ns);
retVal |= function_namespace0_generated_670_begin(server, ns);
retVal |= function_namespace0_generated_671_begin(server, ns);
retVal |= function_namespace0_generated_672_begin(server, ns);
retVal |= function_namespace0_generated_673_begin(server, ns);
retVal |= function_namespace0_generated_674_begin(server, ns);
retVal |= function_namespace0_generated_675_begin(server, ns);
retVal |= function_namespace0_generated_676_begin(server, ns);
retVal |= function_namespace0_generated_677_begin(server, ns);
retVal |= function_namespace0_generated_678_begin(server, ns);
retVal |= function_namespace0_generated_679_begin(server, ns);
retVal |= function_namespace0_generated_680_begin(server, ns);
retVal |= function_namespace0_generated_681_begin(server, ns);
retVal |= function_namespace0_generated_682_begin(server, ns);
retVal |= function_namespace0_generated_683_begin(server, ns);
retVal |= function_namespace0_generated_684_begin(server, ns);
retVal |= function_namespace0_generated_685_begin(server, ns);
retVal |= function_namespace0_generated_686_begin(server, ns);
retVal |= function_namespace0_generated_687_begin(server, ns);
retVal |= function_namespace0_generated_688_begin(server, ns);
retVal |= function_namespace0_generated_689_begin(server, ns);
retVal |= function_namespace0_generated_690_begin(server, ns);
retVal |= function_namespace0_generated_691_begin(server, ns);
retVal |= function_namespace0_generated_692_begin(server, ns);
retVal |= function_namespace0_generated_693_begin(server, ns);
retVal |= function_namespace0_generated_694_begin(server, ns);
retVal |= function_namespace0_generated_695_begin(server, ns);
retVal |= function_namespace0_generated_696_begin(server, ns);
retVal |= function_namespace0_generated_697_begin(server, ns);
retVal |= function_namespace0_generated_698_begin(server, ns);
retVal |= function_namespace0_generated_699_begin(server, ns);
retVal |= function_namespace0_generated_700_begin(server, ns);
retVal |= function_namespace0_generated_701_begin(server, ns);
retVal |= function_namespace0_generated_702_begin(server, ns);
retVal |= function_namespace0_generated_703_begin(server, ns);
retVal |= function_namespace0_generated_704_begin(server, ns);
retVal |= function_namespace0_generated_705_begin(server, ns);
retVal |= function_namespace0_generated_706_begin(server, ns);
retVal |= function_namespace0_generated_707_begin(server, ns);
retVal |= function_namespace0_generated_708_begin(server, ns);
retVal |= function_namespace0_generated_709_begin(server, ns);
retVal |= function_namespace0_generated_710_begin(server, ns);
retVal |= function_namespace0_generated_711_begin(server, ns);
retVal |= function_namespace0_generated_712_begin(server, ns);
retVal |= function_namespace0_generated_713_begin(server, ns);
retVal |= function_namespace0_generated_714_begin(server, ns);
retVal |= function_namespace0_generated_715_begin(server, ns);
retVal |= function_namespace0_generated_716_begin(server, ns);
retVal |= function_namespace0_generated_717_begin(server, ns);
retVal |= function_namespace0_generated_718_begin(server, ns);
retVal |= function_namespace0_generated_719_begin(server, ns);
retVal |= function_namespace0_generated_720_begin(server, ns);
retVal |= function_namespace0_generated_721_begin(server, ns);
retVal |= function_namespace0_generated_722_begin(server, ns);
retVal |= function_namespace0_generated_723_begin(server, ns);
retVal |= function_namespace0_generated_724_begin(server, ns);
retVal |= function_namespace0_generated_725_begin(server, ns);
retVal |= function_namespace0_generated_726_begin(server, ns);
retVal |= function_namespace0_generated_727_begin(server, ns);
retVal |= function_namespace0_generated_728_begin(server, ns);
retVal |= function_namespace0_generated_729_begin(server, ns);
retVal |= function_namespace0_generated_730_begin(server, ns);
retVal |= function_namespace0_generated_731_begin(server, ns);
retVal |= function_namespace0_generated_732_begin(server, ns);
retVal |= function_namespace0_generated_733_begin(server, ns);
retVal |= function_namespace0_generated_734_begin(server, ns);
retVal |= function_namespace0_generated_735_begin(server, ns);
retVal |= function_namespace0_generated_736_begin(server, ns);
retVal |= function_namespace0_generated_737_begin(server, ns);
retVal |= function_namespace0_generated_738_begin(server, ns);
retVal |= function_namespace0_generated_739_begin(server, ns);
retVal |= function_namespace0_generated_740_begin(server, ns);
retVal |= function_namespace0_generated_741_begin(server, ns);
retVal |= function_namespace0_generated_742_begin(server, ns);
retVal |= function_namespace0_generated_743_begin(server, ns);
retVal |= function_namespace0_generated_744_begin(server, ns);
retVal |= function_namespace0_generated_745_begin(server, ns);
retVal |= function_namespace0_generated_746_begin(server, ns);
retVal |= function_namespace0_generated_747_begin(server, ns);
retVal |= function_namespace0_generated_748_begin(server, ns);
retVal |= function_namespace0_generated_749_begin(server, ns);
retVal |= function_namespace0_generated_750_begin(server, ns);
retVal |= function_namespace0_generated_751_begin(server, ns);
retVal |= function_namespace0_generated_752_begin(server, ns);
retVal |= function_namespace0_generated_753_begin(server, ns);
retVal |= function_namespace0_generated_754_begin(server, ns);
retVal |= function_namespace0_generated_755_begin(server, ns);
retVal |= function_namespace0_generated_756_begin(server, ns);
retVal |= function_namespace0_generated_757_begin(server, ns);
retVal |= function_namespace0_generated_758_begin(server, ns);
retVal |= function_namespace0_generated_759_begin(server, ns);
retVal |= function_namespace0_generated_760_begin(server, ns);
retVal |= function_namespace0_generated_761_begin(server, ns);
retVal |= function_namespace0_generated_762_begin(server, ns);
retVal |= function_namespace0_generated_763_begin(server, ns);
retVal |= function_namespace0_generated_764_begin(server, ns);
retVal |= function_namespace0_generated_765_begin(server, ns);
retVal |= function_namespace0_generated_766_begin(server, ns);
retVal |= function_namespace0_generated_766_finish(server, ns);
retVal |= function_namespace0_generated_765_finish(server, ns);
retVal |= function_namespace0_generated_764_finish(server, ns);
retVal |= function_namespace0_generated_763_finish(server, ns);
retVal |= function_namespace0_generated_762_finish(server, ns);
retVal |= function_namespace0_generated_761_finish(server, ns);
retVal |= function_namespace0_generated_760_finish(server, ns);
retVal |= function_namespace0_generated_759_finish(server, ns);
retVal |= function_namespace0_generated_758_finish(server, ns);
retVal |= function_namespace0_generated_757_finish(server, ns);
retVal |= function_namespace0_generated_756_finish(server, ns);
retVal |= function_namespace0_generated_755_finish(server, ns);
retVal |= function_namespace0_generated_754_finish(server, ns);
retVal |= function_namespace0_generated_753_finish(server, ns);
retVal |= function_namespace0_generated_752_finish(server, ns);
retVal |= function_namespace0_generated_751_finish(server, ns);
retVal |= function_namespace0_generated_750_finish(server, ns);
retVal |= function_namespace0_generated_749_finish(server, ns);
retVal |= function_namespace0_generated_748_finish(server, ns);
retVal |= function_namespace0_generated_747_finish(server, ns);
retVal |= function_namespace0_generated_746_finish(server, ns);
retVal |= function_namespace0_generated_745_finish(server, ns);
retVal |= function_namespace0_generated_744_finish(server, ns);
retVal |= function_namespace0_generated_743_finish(server, ns);
retVal |= function_namespace0_generated_742_finish(server, ns);
retVal |= function_namespace0_generated_741_finish(server, ns);
retVal |= function_namespace0_generated_740_finish(server, ns);
retVal |= function_namespace0_generated_739_finish(server, ns);
retVal |= function_namespace0_generated_738_finish(server, ns);
retVal |= function_namespace0_generated_737_finish(server, ns);
retVal |= function_namespace0_generated_736_finish(server, ns);
retVal |= function_namespace0_generated_735_finish(server, ns);
retVal |= function_namespace0_generated_734_finish(server, ns);
retVal |= function_namespace0_generated_733_finish(server, ns);
retVal |= function_namespace0_generated_732_finish(server, ns);
retVal |= function_namespace0_generated_731_finish(server, ns);
retVal |= function_namespace0_generated_730_finish(server, ns);
retVal |= function_namespace0_generated_729_finish(server, ns);
retVal |= function_namespace0_generated_728_finish(server, ns);
retVal |= function_namespace0_generated_727_finish(server, ns);
retVal |= function_namespace0_generated_726_finish(server, ns);
retVal |= function_namespace0_generated_725_finish(server, ns);
retVal |= function_namespace0_generated_724_finish(server, ns);
retVal |= function_namespace0_generated_723_finish(server, ns);
retVal |= function_namespace0_generated_722_finish(server, ns);
retVal |= function_namespace0_generated_721_finish(server, ns);
retVal |= function_namespace0_generated_720_finish(server, ns);
retVal |= function_namespace0_generated_719_finish(server, ns);
retVal |= function_namespace0_generated_718_finish(server, ns);
retVal |= function_namespace0_generated_717_finish(server, ns);
retVal |= function_namespace0_generated_716_finish(server, ns);
retVal |= function_namespace0_generated_715_finish(server, ns);
retVal |= function_namespace0_generated_714_finish(server, ns);
retVal |= function_namespace0_generated_713_finish(server, ns);
retVal |= function_namespace0_generated_712_finish(server, ns);
retVal |= function_namespace0_generated_711_finish(server, ns);
retVal |= function_namespace0_generated_710_finish(server, ns);
retVal |= function_namespace0_generated_709_finish(server, ns);
retVal |= function_namespace0_generated_708_finish(server, ns);
retVal |= function_namespace0_generated_707_finish(server, ns);
retVal |= function_namespace0_generated_706_finish(server, ns);
retVal |= function_namespace0_generated_705_finish(server, ns);
retVal |= function_namespace0_generated_704_finish(server, ns);
retVal |= function_namespace0_generated_703_finish(server, ns);
retVal |= function_namespace0_generated_702_finish(server, ns);
retVal |= function_namespace0_generated_701_finish(server, ns);
retVal |= function_namespace0_generated_700_finish(server, ns);
retVal |= function_namespace0_generated_699_finish(server, ns);
retVal |= function_namespace0_generated_698_finish(server, ns);
retVal |= function_namespace0_generated_697_finish(server, ns);
retVal |= function_namespace0_generated_696_finish(server, ns);
retVal |= function_namespace0_generated_695_finish(server, ns);
retVal |= function_namespace0_generated_694_finish(server, ns);
retVal |= function_namespace0_generated_693_finish(server, ns);
retVal |= function_namespace0_generated_692_finish(server, ns);
retVal |= function_namespace0_generated_691_finish(server, ns);
retVal |= function_namespace0_generated_690_finish(server, ns);
retVal |= function_namespace0_generated_689_finish(server, ns);
retVal |= function_namespace0_generated_688_finish(server, ns);
retVal |= function_namespace0_generated_687_finish(server, ns);
retVal |= function_namespace0_generated_686_finish(server, ns);
retVal |= function_namespace0_generated_685_finish(server, ns);
retVal |= function_namespace0_generated_684_finish(server, ns);
retVal |= function_namespace0_generated_683_finish(server, ns);
retVal |= function_namespace0_generated_682_finish(server, ns);
retVal |= function_namespace0_generated_681_finish(server, ns);
retVal |= function_namespace0_generated_680_finish(server, ns);
retVal |= function_namespace0_generated_679_finish(server, ns);
retVal |= function_namespace0_generated_678_finish(server, ns);
retVal |= function_namespace0_generated_677_finish(server, ns);
retVal |= function_namespace0_generated_676_finish(server, ns);
retVal |= function_namespace0_generated_675_finish(server, ns);
retVal |= function_namespace0_generated_674_finish(server, ns);
retVal |= function_namespace0_generated_673_finish(server, ns);
retVal |= function_namespace0_generated_672_finish(server, ns);
retVal |= function_namespace0_generated_671_finish(server, ns);
retVal |= function_namespace0_generated_670_finish(server, ns);
retVal |= function_namespace0_generated_669_finish(server, ns);
retVal |= function_namespace0_generated_668_finish(server, ns);
retVal |= function_namespace0_generated_667_finish(server, ns);
retVal |= function_namespace0_generated_666_finish(server, ns);
retVal |= function_namespace0_generated_665_finish(server, ns);
retVal |= function_namespace0_generated_664_finish(server, ns);
retVal |= function_namespace0_generated_663_finish(server, ns);
retVal |= function_namespace0_generated_662_finish(server, ns);
retVal |= function_namespace0_generated_661_finish(server, ns);
retVal |= function_namespace0_generated_660_finish(server, ns);
retVal |= function_namespace0_generated_659_finish(server, ns);
retVal |= function_namespace0_generated_658_finish(server, ns);
retVal |= function_namespace0_generated_657_finish(server, ns);
retVal |= function_namespace0_generated_656_finish(server, ns);
retVal |= function_namespace0_generated_655_finish(server, ns);
retVal |= function_namespace0_generated_654_finish(server, ns);
retVal |= function_namespace0_generated_653_finish(server, ns);
retVal |= function_namespace0_generated_652_finish(server, ns);
retVal |= function_namespace0_generated_651_finish(server, ns);
retVal |= function_namespace0_generated_650_finish(server, ns);
retVal |= function_namespace0_generated_649_finish(server, ns);
retVal |= function_namespace0_generated_648_finish(server, ns);
retVal |= function_namespace0_generated_647_finish(server, ns);
retVal |= function_namespace0_generated_646_finish(server, ns);
retVal |= function_namespace0_generated_645_finish(server, ns);
retVal |= function_namespace0_generated_644_finish(server, ns);
retVal |= function_namespace0_generated_643_finish(server, ns);
retVal |= function_namespace0_generated_642_finish(server, ns);
retVal |= function_namespace0_generated_641_finish(server, ns);
retVal |= function_namespace0_generated_640_finish(server, ns);
retVal |= function_namespace0_generated_639_finish(server, ns);
retVal |= function_namespace0_generated_638_finish(server, ns);
retVal |= function_namespace0_generated_637_finish(server, ns);
retVal |= function_namespace0_generated_636_finish(server, ns);
retVal |= function_namespace0_generated_635_finish(server, ns);
retVal |= function_namespace0_generated_634_finish(server, ns);
retVal |= function_namespace0_generated_633_finish(server, ns);
retVal |= function_namespace0_generated_632_finish(server, ns);
retVal |= function_namespace0_generated_631_finish(server, ns);
retVal |= function_namespace0_generated_630_finish(server, ns);
retVal |= function_namespace0_generated_629_finish(server, ns);
retVal |= function_namespace0_generated_628_finish(server, ns);
retVal |= function_namespace0_generated_627_finish(server, ns);
retVal |= function_namespace0_generated_626_finish(server, ns);
retVal |= function_namespace0_generated_625_finish(server, ns);
retVal |= function_namespace0_generated_624_finish(server, ns);
retVal |= function_namespace0_generated_623_finish(server, ns);
retVal |= function_namespace0_generated_622_finish(server, ns);
retVal |= function_namespace0_generated_621_finish(server, ns);
retVal |= function_namespace0_generated_620_finish(server, ns);
retVal |= function_namespace0_generated_619_finish(server, ns);
retVal |= function_namespace0_generated_618_finish(server, ns);
retVal |= function_namespace0_generated_617_finish(server, ns);
retVal |= function_namespace0_generated_616_finish(server, ns);
retVal |= function_namespace0_generated_615_finish(server, ns);
retVal |= function_namespace0_generated_614_finish(server, ns);
retVal |= function_namespace0_generated_613_finish(server, ns);
retVal |= function_namespace0_generated_612_finish(server, ns);
retVal |= function_namespace0_generated_611_finish(server, ns);
retVal |= function_namespace0_generated_610_finish(server, ns);
retVal |= function_namespace0_generated_609_finish(server, ns);
retVal |= function_namespace0_generated_608_finish(server, ns);
retVal |= function_namespace0_generated_607_finish(server, ns);
retVal |= function_namespace0_generated_606_finish(server, ns);
retVal |= function_namespace0_generated_605_finish(server, ns);
retVal |= function_namespace0_generated_604_finish(server, ns);
retVal |= function_namespace0_generated_603_finish(server, ns);
retVal |= function_namespace0_generated_602_finish(server, ns);
retVal |= function_namespace0_generated_601_finish(server, ns);
retVal |= function_namespace0_generated_600_finish(server, ns);
retVal |= function_namespace0_generated_599_finish(server, ns);
retVal |= function_namespace0_generated_598_finish(server, ns);
retVal |= function_namespace0_generated_597_finish(server, ns);
retVal |= function_namespace0_generated_596_finish(server, ns);
retVal |= function_namespace0_generated_595_finish(server, ns);
retVal |= function_namespace0_generated_594_finish(server, ns);
retVal |= function_namespace0_generated_593_finish(server, ns);
retVal |= function_namespace0_generated_592_finish(server, ns);
retVal |= function_namespace0_generated_591_finish(server, ns);
retVal |= function_namespace0_generated_590_finish(server, ns);
retVal |= function_namespace0_generated_589_finish(server, ns);
retVal |= function_namespace0_generated_588_finish(server, ns);
retVal |= function_namespace0_generated_587_finish(server, ns);
retVal |= function_namespace0_generated_586_finish(server, ns);
retVal |= function_namespace0_generated_585_finish(server, ns);
retVal |= function_namespace0_generated_584_finish(server, ns);
retVal |= function_namespace0_generated_583_finish(server, ns);
retVal |= function_namespace0_generated_582_finish(server, ns);
retVal |= function_namespace0_generated_581_finish(server, ns);
retVal |= function_namespace0_generated_580_finish(server, ns);
retVal |= function_namespace0_generated_579_finish(server, ns);
retVal |= function_namespace0_generated_578_finish(server, ns);
retVal |= function_namespace0_generated_577_finish(server, ns);
retVal |= function_namespace0_generated_576_finish(server, ns);
retVal |= function_namespace0_generated_575_finish(server, ns);
retVal |= function_namespace0_generated_574_finish(server, ns);
retVal |= function_namespace0_generated_573_finish(server, ns);
retVal |= function_namespace0_generated_572_finish(server, ns);
retVal |= function_namespace0_generated_571_finish(server, ns);
retVal |= function_namespace0_generated_570_finish(server, ns);
retVal |= function_namespace0_generated_569_finish(server, ns);
retVal |= function_namespace0_generated_568_finish(server, ns);
retVal |= function_namespace0_generated_567_finish(server, ns);
retVal |= function_namespace0_generated_566_finish(server, ns);
retVal |= function_namespace0_generated_565_finish(server, ns);
retVal |= function_namespace0_generated_564_finish(server, ns);
retVal |= function_namespace0_generated_563_finish(server, ns);
retVal |= function_namespace0_generated_562_finish(server, ns);
retVal |= function_namespace0_generated_561_finish(server, ns);
retVal |= function_namespace0_generated_560_finish(server, ns);
retVal |= function_namespace0_generated_559_finish(server, ns);
retVal |= function_namespace0_generated_558_finish(server, ns);
retVal |= function_namespace0_generated_557_finish(server, ns);
retVal |= function_namespace0_generated_556_finish(server, ns);
retVal |= function_namespace0_generated_555_finish(server, ns);
retVal |= function_namespace0_generated_554_finish(server, ns);
retVal |= function_namespace0_generated_553_finish(server, ns);
retVal |= function_namespace0_generated_552_finish(server, ns);
retVal |= function_namespace0_generated_551_finish(server, ns);
retVal |= function_namespace0_generated_550_finish(server, ns);
retVal |= function_namespace0_generated_549_finish(server, ns);
retVal |= function_namespace0_generated_548_finish(server, ns);
retVal |= function_namespace0_generated_547_finish(server, ns);
retVal |= function_namespace0_generated_546_finish(server, ns);
retVal |= function_namespace0_generated_545_finish(server, ns);
retVal |= function_namespace0_generated_544_finish(server, ns);
retVal |= function_namespace0_generated_543_finish(server, ns);
retVal |= function_namespace0_generated_542_finish(server, ns);
retVal |= function_namespace0_generated_541_finish(server, ns);
retVal |= function_namespace0_generated_540_finish(server, ns);
retVal |= function_namespace0_generated_539_finish(server, ns);
retVal |= function_namespace0_generated_538_finish(server, ns);
retVal |= function_namespace0_generated_537_finish(server, ns);
retVal |= function_namespace0_generated_536_finish(server, ns);
retVal |= function_namespace0_generated_535_finish(server, ns);
retVal |= function_namespace0_generated_534_finish(server, ns);
retVal |= function_namespace0_generated_533_finish(server, ns);
retVal |= function_namespace0_generated_532_finish(server, ns);
retVal |= function_namespace0_generated_531_finish(server, ns);
retVal |= function_namespace0_generated_530_finish(server, ns);
retVal |= function_namespace0_generated_529_finish(server, ns);
retVal |= function_namespace0_generated_528_finish(server, ns);
retVal |= function_namespace0_generated_527_finish(server, ns);
retVal |= function_namespace0_generated_526_finish(server, ns);
retVal |= function_namespace0_generated_525_finish(server, ns);
retVal |= function_namespace0_generated_524_finish(server, ns);
retVal |= function_namespace0_generated_523_finish(server, ns);
retVal |= function_namespace0_generated_522_finish(server, ns);
retVal |= function_namespace0_generated_521_finish(server, ns);
retVal |= function_namespace0_generated_520_finish(server, ns);
retVal |= function_namespace0_generated_519_finish(server, ns);
retVal |= function_namespace0_generated_518_finish(server, ns);
retVal |= function_namespace0_generated_517_finish(server, ns);
retVal |= function_namespace0_generated_516_finish(server, ns);
retVal |= function_namespace0_generated_515_finish(server, ns);
retVal |= function_namespace0_generated_514_finish(server, ns);
retVal |= function_namespace0_generated_513_finish(server, ns);
retVal |= function_namespace0_generated_512_finish(server, ns);
retVal |= function_namespace0_generated_511_finish(server, ns);
retVal |= function_namespace0_generated_510_finish(server, ns);
retVal |= function_namespace0_generated_509_finish(server, ns);
retVal |= function_namespace0_generated_508_finish(server, ns);
retVal |= function_namespace0_generated_507_finish(server, ns);
retVal |= function_namespace0_generated_506_finish(server, ns);
retVal |= function_namespace0_generated_505_finish(server, ns);
retVal |= function_namespace0_generated_504_finish(server, ns);
retVal |= function_namespace0_generated_503_finish(server, ns);
retVal |= function_namespace0_generated_502_finish(server, ns);
retVal |= function_namespace0_generated_501_finish(server, ns);
retVal |= function_namespace0_generated_500_finish(server, ns);
retVal |= function_namespace0_generated_499_finish(server, ns);
retVal |= function_namespace0_generated_498_finish(server, ns);
retVal |= function_namespace0_generated_497_finish(server, ns);
retVal |= function_namespace0_generated_496_finish(server, ns);
retVal |= function_namespace0_generated_495_finish(server, ns);
retVal |= function_namespace0_generated_494_finish(server, ns);
retVal |= function_namespace0_generated_493_finish(server, ns);
retVal |= function_namespace0_generated_492_finish(server, ns);
retVal |= function_namespace0_generated_491_finish(server, ns);
retVal |= function_namespace0_generated_490_finish(server, ns);
retVal |= function_namespace0_generated_489_finish(server, ns);
retVal |= function_namespace0_generated_488_finish(server, ns);
retVal |= function_namespace0_generated_487_finish(server, ns);
retVal |= function_namespace0_generated_486_finish(server, ns);
retVal |= function_namespace0_generated_485_finish(server, ns);
retVal |= function_namespace0_generated_484_finish(server, ns);
retVal |= function_namespace0_generated_483_finish(server, ns);
retVal |= function_namespace0_generated_482_finish(server, ns);
retVal |= function_namespace0_generated_481_finish(server, ns);
retVal |= function_namespace0_generated_480_finish(server, ns);
retVal |= function_namespace0_generated_479_finish(server, ns);
retVal |= function_namespace0_generated_478_finish(server, ns);
retVal |= function_namespace0_generated_477_finish(server, ns);
retVal |= function_namespace0_generated_476_finish(server, ns);
retVal |= function_namespace0_generated_475_finish(server, ns);
retVal |= function_namespace0_generated_474_finish(server, ns);
retVal |= function_namespace0_generated_473_finish(server, ns);
retVal |= function_namespace0_generated_472_finish(server, ns);
retVal |= function_namespace0_generated_471_finish(server, ns);
retVal |= function_namespace0_generated_470_finish(server, ns);
retVal |= function_namespace0_generated_469_finish(server, ns);
retVal |= function_namespace0_generated_468_finish(server, ns);
retVal |= function_namespace0_generated_467_finish(server, ns);
retVal |= function_namespace0_generated_466_finish(server, ns);
retVal |= function_namespace0_generated_465_finish(server, ns);
retVal |= function_namespace0_generated_464_finish(server, ns);
retVal |= function_namespace0_generated_463_finish(server, ns);
retVal |= function_namespace0_generated_462_finish(server, ns);
retVal |= function_namespace0_generated_461_finish(server, ns);
retVal |= function_namespace0_generated_460_finish(server, ns);
retVal |= function_namespace0_generated_459_finish(server, ns);
retVal |= function_namespace0_generated_458_finish(server, ns);
retVal |= function_namespace0_generated_457_finish(server, ns);
retVal |= function_namespace0_generated_456_finish(server, ns);
retVal |= function_namespace0_generated_455_finish(server, ns);
retVal |= function_namespace0_generated_454_finish(server, ns);
retVal |= function_namespace0_generated_453_finish(server, ns);
retVal |= function_namespace0_generated_452_finish(server, ns);
retVal |= function_namespace0_generated_451_finish(server, ns);
retVal |= function_namespace0_generated_450_finish(server, ns);
retVal |= function_namespace0_generated_449_finish(server, ns);
retVal |= function_namespace0_generated_448_finish(server, ns);
retVal |= function_namespace0_generated_447_finish(server, ns);
retVal |= function_namespace0_generated_446_finish(server, ns);
retVal |= function_namespace0_generated_445_finish(server, ns);
retVal |= function_namespace0_generated_444_finish(server, ns);
retVal |= function_namespace0_generated_443_finish(server, ns);
retVal |= function_namespace0_generated_442_finish(server, ns);
retVal |= function_namespace0_generated_441_finish(server, ns);
retVal |= function_namespace0_generated_440_finish(server, ns);
retVal |= function_namespace0_generated_439_finish(server, ns);
retVal |= function_namespace0_generated_438_finish(server, ns);
retVal |= function_namespace0_generated_437_finish(server, ns);
retVal |= function_namespace0_generated_436_finish(server, ns);
retVal |= function_namespace0_generated_435_finish(server, ns);
retVal |= function_namespace0_generated_434_finish(server, ns);
retVal |= function_namespace0_generated_433_finish(server, ns);
retVal |= function_namespace0_generated_432_finish(server, ns);
retVal |= function_namespace0_generated_431_finish(server, ns);
retVal |= function_namespace0_generated_430_finish(server, ns);
retVal |= function_namespace0_generated_429_finish(server, ns);
retVal |= function_namespace0_generated_428_finish(server, ns);
retVal |= function_namespace0_generated_427_finish(server, ns);
retVal |= function_namespace0_generated_426_finish(server, ns);
retVal |= function_namespace0_generated_425_finish(server, ns);
retVal |= function_namespace0_generated_424_finish(server, ns);
retVal |= function_namespace0_generated_423_finish(server, ns);
retVal |= function_namespace0_generated_422_finish(server, ns);
retVal |= function_namespace0_generated_421_finish(server, ns);
retVal |= function_namespace0_generated_420_finish(server, ns);
retVal |= function_namespace0_generated_419_finish(server, ns);
retVal |= function_namespace0_generated_418_finish(server, ns);
retVal |= function_namespace0_generated_417_finish(server, ns);
retVal |= function_namespace0_generated_416_finish(server, ns);
retVal |= function_namespace0_generated_415_finish(server, ns);
retVal |= function_namespace0_generated_414_finish(server, ns);
retVal |= function_namespace0_generated_413_finish(server, ns);
retVal |= function_namespace0_generated_412_finish(server, ns);
retVal |= function_namespace0_generated_411_finish(server, ns);
retVal |= function_namespace0_generated_410_finish(server, ns);
retVal |= function_namespace0_generated_409_finish(server, ns);
retVal |= function_namespace0_generated_408_finish(server, ns);
retVal |= function_namespace0_generated_407_finish(server, ns);
retVal |= function_namespace0_generated_406_finish(server, ns);
retVal |= function_namespace0_generated_405_finish(server, ns);
retVal |= function_namespace0_generated_404_finish(server, ns);
retVal |= function_namespace0_generated_403_finish(server, ns);
retVal |= function_namespace0_generated_402_finish(server, ns);
retVal |= function_namespace0_generated_401_finish(server, ns);
retVal |= function_namespace0_generated_400_finish(server, ns);
retVal |= function_namespace0_generated_399_finish(server, ns);
retVal |= function_namespace0_generated_398_finish(server, ns);
retVal |= function_namespace0_generated_397_finish(server, ns);
retVal |= function_namespace0_generated_396_finish(server, ns);
retVal |= function_namespace0_generated_395_finish(server, ns);
retVal |= function_namespace0_generated_394_finish(server, ns);
retVal |= function_namespace0_generated_393_finish(server, ns);
retVal |= function_namespace0_generated_392_finish(server, ns);
retVal |= function_namespace0_generated_391_finish(server, ns);
retVal |= function_namespace0_generated_390_finish(server, ns);
retVal |= function_namespace0_generated_389_finish(server, ns);
retVal |= function_namespace0_generated_388_finish(server, ns);
retVal |= function_namespace0_generated_387_finish(server, ns);
retVal |= function_namespace0_generated_386_finish(server, ns);
retVal |= function_namespace0_generated_385_finish(server, ns);
retVal |= function_namespace0_generated_384_finish(server, ns);
retVal |= function_namespace0_generated_383_finish(server, ns);
retVal |= function_namespace0_generated_382_finish(server, ns);
retVal |= function_namespace0_generated_381_finish(server, ns);
retVal |= function_namespace0_generated_380_finish(server, ns);
retVal |= function_namespace0_generated_379_finish(server, ns);
retVal |= function_namespace0_generated_378_finish(server, ns);
retVal |= function_namespace0_generated_377_finish(server, ns);
retVal |= function_namespace0_generated_376_finish(server, ns);
retVal |= function_namespace0_generated_375_finish(server, ns);
retVal |= function_namespace0_generated_374_finish(server, ns);
retVal |= function_namespace0_generated_373_finish(server, ns);
retVal |= function_namespace0_generated_372_finish(server, ns);
retVal |= function_namespace0_generated_371_finish(server, ns);
retVal |= function_namespace0_generated_370_finish(server, ns);
retVal |= function_namespace0_generated_369_finish(server, ns);
retVal |= function_namespace0_generated_368_finish(server, ns);
retVal |= function_namespace0_generated_367_finish(server, ns);
retVal |= function_namespace0_generated_366_finish(server, ns);
retVal |= function_namespace0_generated_365_finish(server, ns);
retVal |= function_namespace0_generated_364_finish(server, ns);
retVal |= function_namespace0_generated_363_finish(server, ns);
retVal |= function_namespace0_generated_362_finish(server, ns);
retVal |= function_namespace0_generated_361_finish(server, ns);
retVal |= function_namespace0_generated_360_finish(server, ns);
retVal |= function_namespace0_generated_359_finish(server, ns);
retVal |= function_namespace0_generated_358_finish(server, ns);
retVal |= function_namespace0_generated_357_finish(server, ns);
retVal |= function_namespace0_generated_356_finish(server, ns);
retVal |= function_namespace0_generated_355_finish(server, ns);
retVal |= function_namespace0_generated_354_finish(server, ns);
retVal |= function_namespace0_generated_353_finish(server, ns);
retVal |= function_namespace0_generated_352_finish(server, ns);
retVal |= function_namespace0_generated_351_finish(server, ns);
retVal |= function_namespace0_generated_350_finish(server, ns);
retVal |= function_namespace0_generated_349_finish(server, ns);
retVal |= function_namespace0_generated_348_finish(server, ns);
retVal |= function_namespace0_generated_347_finish(server, ns);
retVal |= function_namespace0_generated_346_finish(server, ns);
retVal |= function_namespace0_generated_345_finish(server, ns);
retVal |= function_namespace0_generated_344_finish(server, ns);
retVal |= function_namespace0_generated_343_finish(server, ns);
retVal |= function_namespace0_generated_342_finish(server, ns);
retVal |= function_namespace0_generated_341_finish(server, ns);
retVal |= function_namespace0_generated_340_finish(server, ns);
retVal |= function_namespace0_generated_339_finish(server, ns);
retVal |= function_namespace0_generated_338_finish(server, ns);
retVal |= function_namespace0_generated_337_finish(server, ns);
retVal |= function_namespace0_generated_336_finish(server, ns);
retVal |= function_namespace0_generated_335_finish(server, ns);
retVal |= function_namespace0_generated_334_finish(server, ns);
retVal |= function_namespace0_generated_333_finish(server, ns);
retVal |= function_namespace0_generated_332_finish(server, ns);
retVal |= function_namespace0_generated_331_finish(server, ns);
retVal |= function_namespace0_generated_330_finish(server, ns);
retVal |= function_namespace0_generated_329_finish(server, ns);
retVal |= function_namespace0_generated_328_finish(server, ns);
retVal |= function_namespace0_generated_327_finish(server, ns);
retVal |= function_namespace0_generated_326_finish(server, ns);
retVal |= function_namespace0_generated_325_finish(server, ns);
retVal |= function_namespace0_generated_324_finish(server, ns);
retVal |= function_namespace0_generated_323_finish(server, ns);
retVal |= function_namespace0_generated_322_finish(server, ns);
retVal |= function_namespace0_generated_321_finish(server, ns);
retVal |= function_namespace0_generated_320_finish(server, ns);
retVal |= function_namespace0_generated_319_finish(server, ns);
retVal |= function_namespace0_generated_318_finish(server, ns);
retVal |= function_namespace0_generated_317_finish(server, ns);
retVal |= function_namespace0_generated_316_finish(server, ns);
retVal |= function_namespace0_generated_315_finish(server, ns);
retVal |= function_namespace0_generated_314_finish(server, ns);
retVal |= function_namespace0_generated_313_finish(server, ns);
retVal |= function_namespace0_generated_312_finish(server, ns);
retVal |= function_namespace0_generated_311_finish(server, ns);
retVal |= function_namespace0_generated_310_finish(server, ns);
retVal |= function_namespace0_generated_309_finish(server, ns);
retVal |= function_namespace0_generated_308_finish(server, ns);
retVal |= function_namespace0_generated_307_finish(server, ns);
retVal |= function_namespace0_generated_306_finish(server, ns);
retVal |= function_namespace0_generated_305_finish(server, ns);
retVal |= function_namespace0_generated_304_finish(server, ns);
retVal |= function_namespace0_generated_303_finish(server, ns);
retVal |= function_namespace0_generated_302_finish(server, ns);
retVal |= function_namespace0_generated_301_finish(server, ns);
retVal |= function_namespace0_generated_300_finish(server, ns);
retVal |= function_namespace0_generated_299_finish(server, ns);
retVal |= function_namespace0_generated_298_finish(server, ns);
retVal |= function_namespace0_generated_297_finish(server, ns);
retVal |= function_namespace0_generated_296_finish(server, ns);
retVal |= function_namespace0_generated_295_finish(server, ns);
retVal |= function_namespace0_generated_294_finish(server, ns);
retVal |= function_namespace0_generated_293_finish(server, ns);
retVal |= function_namespace0_generated_292_finish(server, ns);
retVal |= function_namespace0_generated_291_finish(server, ns);
retVal |= function_namespace0_generated_290_finish(server, ns);
retVal |= function_namespace0_generated_289_finish(server, ns);
retVal |= function_namespace0_generated_288_finish(server, ns);
retVal |= function_namespace0_generated_287_finish(server, ns);
retVal |= function_namespace0_generated_286_finish(server, ns);
retVal |= function_namespace0_generated_285_finish(server, ns);
retVal |= function_namespace0_generated_284_finish(server, ns);
retVal |= function_namespace0_generated_283_finish(server, ns);
retVal |= function_namespace0_generated_282_finish(server, ns);
retVal |= function_namespace0_generated_281_finish(server, ns);
retVal |= function_namespace0_generated_280_finish(server, ns);
retVal |= function_namespace0_generated_279_finish(server, ns);
retVal |= function_namespace0_generated_278_finish(server, ns);
retVal |= function_namespace0_generated_277_finish(server, ns);
retVal |= function_namespace0_generated_276_finish(server, ns);
retVal |= function_namespace0_generated_275_finish(server, ns);
retVal |= function_namespace0_generated_274_finish(server, ns);
retVal |= function_namespace0_generated_273_finish(server, ns);
retVal |= function_namespace0_generated_272_finish(server, ns);
retVal |= function_namespace0_generated_271_finish(server, ns);
retVal |= function_namespace0_generated_270_finish(server, ns);
retVal |= function_namespace0_generated_269_finish(server, ns);
retVal |= function_namespace0_generated_268_finish(server, ns);
retVal |= function_namespace0_generated_267_finish(server, ns);
retVal |= function_namespace0_generated_266_finish(server, ns);
retVal |= function_namespace0_generated_265_finish(server, ns);
retVal |= function_namespace0_generated_264_finish(server, ns);
retVal |= function_namespace0_generated_263_finish(server, ns);
retVal |= function_namespace0_generated_262_finish(server, ns);
retVal |= function_namespace0_generated_261_finish(server, ns);
retVal |= function_namespace0_generated_260_finish(server, ns);
retVal |= function_namespace0_generated_259_finish(server, ns);
retVal |= function_namespace0_generated_258_finish(server, ns);
retVal |= function_namespace0_generated_257_finish(server, ns);
retVal |= function_namespace0_generated_256_finish(server, ns);
retVal |= function_namespace0_generated_255_finish(server, ns);
retVal |= function_namespace0_generated_254_finish(server, ns);
retVal |= function_namespace0_generated_253_finish(server, ns);
retVal |= function_namespace0_generated_252_finish(server, ns);
retVal |= function_namespace0_generated_251_finish(server, ns);
retVal |= function_namespace0_generated_250_finish(server, ns);
retVal |= function_namespace0_generated_249_finish(server, ns);
retVal |= function_namespace0_generated_248_finish(server, ns);
retVal |= function_namespace0_generated_247_finish(server, ns);
retVal |= function_namespace0_generated_246_finish(server, ns);
retVal |= function_namespace0_generated_245_finish(server, ns);
retVal |= function_namespace0_generated_244_finish(server, ns);
retVal |= function_namespace0_generated_243_finish(server, ns);
retVal |= function_namespace0_generated_242_finish(server, ns);
retVal |= function_namespace0_generated_241_finish(server, ns);
retVal |= function_namespace0_generated_240_finish(server, ns);
retVal |= function_namespace0_generated_239_finish(server, ns);
retVal |= function_namespace0_generated_238_finish(server, ns);
retVal |= function_namespace0_generated_237_finish(server, ns);
retVal |= function_namespace0_generated_236_finish(server, ns);
retVal |= function_namespace0_generated_235_finish(server, ns);
retVal |= function_namespace0_generated_234_finish(server, ns);
retVal |= function_namespace0_generated_233_finish(server, ns);
retVal |= function_namespace0_generated_232_finish(server, ns);
retVal |= function_namespace0_generated_231_finish(server, ns);
retVal |= function_namespace0_generated_230_finish(server, ns);
retVal |= function_namespace0_generated_229_finish(server, ns);
retVal |= function_namespace0_generated_228_finish(server, ns);
retVal |= function_namespace0_generated_227_finish(server, ns);
retVal |= function_namespace0_generated_226_finish(server, ns);
retVal |= function_namespace0_generated_225_finish(server, ns);
retVal |= function_namespace0_generated_224_finish(server, ns);
retVal |= function_namespace0_generated_223_finish(server, ns);
retVal |= function_namespace0_generated_222_finish(server, ns);
retVal |= function_namespace0_generated_221_finish(server, ns);
retVal |= function_namespace0_generated_220_finish(server, ns);
retVal |= function_namespace0_generated_219_finish(server, ns);
retVal |= function_namespace0_generated_218_finish(server, ns);
retVal |= function_namespace0_generated_217_finish(server, ns);
retVal |= function_namespace0_generated_216_finish(server, ns);
retVal |= function_namespace0_generated_215_finish(server, ns);
retVal |= function_namespace0_generated_214_finish(server, ns);
retVal |= function_namespace0_generated_213_finish(server, ns);
retVal |= function_namespace0_generated_212_finish(server, ns);
retVal |= function_namespace0_generated_211_finish(server, ns);
retVal |= function_namespace0_generated_210_finish(server, ns);
retVal |= function_namespace0_generated_209_finish(server, ns);
retVal |= function_namespace0_generated_208_finish(server, ns);
retVal |= function_namespace0_generated_207_finish(server, ns);
retVal |= function_namespace0_generated_206_finish(server, ns);
retVal |= function_namespace0_generated_205_finish(server, ns);
retVal |= function_namespace0_generated_204_finish(server, ns);
retVal |= function_namespace0_generated_203_finish(server, ns);
retVal |= function_namespace0_generated_202_finish(server, ns);
retVal |= function_namespace0_generated_201_finish(server, ns);
retVal |= function_namespace0_generated_200_finish(server, ns);
retVal |= function_namespace0_generated_199_finish(server, ns);
retVal |= function_namespace0_generated_198_finish(server, ns);
retVal |= function_namespace0_generated_197_finish(server, ns);
retVal |= function_namespace0_generated_196_finish(server, ns);
retVal |= function_namespace0_generated_195_finish(server, ns);
retVal |= function_namespace0_generated_194_finish(server, ns);
retVal |= function_namespace0_generated_193_finish(server, ns);
retVal |= function_namespace0_generated_192_finish(server, ns);
retVal |= function_namespace0_generated_191_finish(server, ns);
retVal |= function_namespace0_generated_190_finish(server, ns);
retVal |= function_namespace0_generated_189_finish(server, ns);
retVal |= function_namespace0_generated_188_finish(server, ns);
retVal |= function_namespace0_generated_187_finish(server, ns);
retVal |= function_namespace0_generated_186_finish(server, ns);
retVal |= function_namespace0_generated_185_finish(server, ns);
retVal |= function_namespace0_generated_184_finish(server, ns);
retVal |= function_namespace0_generated_183_finish(server, ns);
retVal |= function_namespace0_generated_182_finish(server, ns);
retVal |= function_namespace0_generated_181_finish(server, ns);
retVal |= function_namespace0_generated_180_finish(server, ns);
retVal |= function_namespace0_generated_179_finish(server, ns);
retVal |= function_namespace0_generated_178_finish(server, ns);
retVal |= function_namespace0_generated_177_finish(server, ns);
retVal |= function_namespace0_generated_176_finish(server, ns);
retVal |= function_namespace0_generated_175_finish(server, ns);
retVal |= function_namespace0_generated_174_finish(server, ns);
retVal |= function_namespace0_generated_173_finish(server, ns);
retVal |= function_namespace0_generated_172_finish(server, ns);
retVal |= function_namespace0_generated_171_finish(server, ns);
retVal |= function_namespace0_generated_170_finish(server, ns);
retVal |= function_namespace0_generated_169_finish(server, ns);
retVal |= function_namespace0_generated_168_finish(server, ns);
retVal |= function_namespace0_generated_167_finish(server, ns);
retVal |= function_namespace0_generated_166_finish(server, ns);
retVal |= function_namespace0_generated_165_finish(server, ns);
retVal |= function_namespace0_generated_164_finish(server, ns);
retVal |= function_namespace0_generated_163_finish(server, ns);
retVal |= function_namespace0_generated_162_finish(server, ns);
retVal |= function_namespace0_generated_161_finish(server, ns);
retVal |= function_namespace0_generated_160_finish(server, ns);
retVal |= function_namespace0_generated_159_finish(server, ns);
retVal |= function_namespace0_generated_158_finish(server, ns);
retVal |= function_namespace0_generated_157_finish(server, ns);
retVal |= function_namespace0_generated_156_finish(server, ns);
retVal |= function_namespace0_generated_155_finish(server, ns);
retVal |= function_namespace0_generated_154_finish(server, ns);
retVal |= function_namespace0_generated_153_finish(server, ns);
retVal |= function_namespace0_generated_152_finish(server, ns);
retVal |= function_namespace0_generated_151_finish(server, ns);
retVal |= function_namespace0_generated_150_finish(server, ns);
retVal |= function_namespace0_generated_149_finish(server, ns);
retVal |= function_namespace0_generated_148_finish(server, ns);
retVal |= function_namespace0_generated_147_finish(server, ns);
retVal |= function_namespace0_generated_146_finish(server, ns);
retVal |= function_namespace0_generated_145_finish(server, ns);
retVal |= function_namespace0_generated_144_finish(server, ns);
retVal |= function_namespace0_generated_143_finish(server, ns);
retVal |= function_namespace0_generated_142_finish(server, ns);
retVal |= function_namespace0_generated_141_finish(server, ns);
retVal |= function_namespace0_generated_140_finish(server, ns);
retVal |= function_namespace0_generated_139_finish(server, ns);
retVal |= function_namespace0_generated_138_finish(server, ns);
retVal |= function_namespace0_generated_137_finish(server, ns);
retVal |= function_namespace0_generated_136_finish(server, ns);
retVal |= function_namespace0_generated_135_finish(server, ns);
retVal |= function_namespace0_generated_134_finish(server, ns);
retVal |= function_namespace0_generated_133_finish(server, ns);
retVal |= function_namespace0_generated_132_finish(server, ns);
retVal |= function_namespace0_generated_131_finish(server, ns);
retVal |= function_namespace0_generated_130_finish(server, ns);
retVal |= function_namespace0_generated_129_finish(server, ns);
retVal |= function_namespace0_generated_128_finish(server, ns);
retVal |= function_namespace0_generated_127_finish(server, ns);
retVal |= function_namespace0_generated_126_finish(server, ns);
retVal |= function_namespace0_generated_125_finish(server, ns);
retVal |= function_namespace0_generated_124_finish(server, ns);
retVal |= function_namespace0_generated_123_finish(server, ns);
retVal |= function_namespace0_generated_122_finish(server, ns);
retVal |= function_namespace0_generated_121_finish(server, ns);
retVal |= function_namespace0_generated_120_finish(server, ns);
retVal |= function_namespace0_generated_119_finish(server, ns);
retVal |= function_namespace0_generated_118_finish(server, ns);
retVal |= function_namespace0_generated_117_finish(server, ns);
retVal |= function_namespace0_generated_116_finish(server, ns);
retVal |= function_namespace0_generated_115_finish(server, ns);
retVal |= function_namespace0_generated_114_finish(server, ns);
retVal |= function_namespace0_generated_113_finish(server, ns);
retVal |= function_namespace0_generated_112_finish(server, ns);
retVal |= function_namespace0_generated_111_finish(server, ns);
retVal |= function_namespace0_generated_110_finish(server, ns);
retVal |= function_namespace0_generated_109_finish(server, ns);
retVal |= function_namespace0_generated_108_finish(server, ns);
retVal |= function_namespace0_generated_107_finish(server, ns);
retVal |= function_namespace0_generated_106_finish(server, ns);
retVal |= function_namespace0_generated_105_finish(server, ns);
retVal |= function_namespace0_generated_104_finish(server, ns);
retVal |= function_namespace0_generated_103_finish(server, ns);
retVal |= function_namespace0_generated_102_finish(server, ns);
retVal |= function_namespace0_generated_101_finish(server, ns);
retVal |= function_namespace0_generated_100_finish(server, ns);
retVal |= function_namespace0_generated_99_finish(server, ns);
retVal |= function_namespace0_generated_98_finish(server, ns);
retVal |= function_namespace0_generated_97_finish(server, ns);
retVal |= function_namespace0_generated_96_finish(server, ns);
retVal |= function_namespace0_generated_95_finish(server, ns);
retVal |= function_namespace0_generated_94_finish(server, ns);
retVal |= function_namespace0_generated_93_finish(server, ns);
retVal |= function_namespace0_generated_92_finish(server, ns);
retVal |= function_namespace0_generated_91_finish(server, ns);
retVal |= function_namespace0_generated_90_finish(server, ns);
retVal |= function_namespace0_generated_89_finish(server, ns);
retVal |= function_namespace0_generated_88_finish(server, ns);
retVal |= function_namespace0_generated_87_finish(server, ns);
retVal |= function_namespace0_generated_86_finish(server, ns);
retVal |= function_namespace0_generated_85_finish(server, ns);
retVal |= function_namespace0_generated_84_finish(server, ns);
retVal |= function_namespace0_generated_83_finish(server, ns);
retVal |= function_namespace0_generated_82_finish(server, ns);
retVal |= function_namespace0_generated_81_finish(server, ns);
retVal |= function_namespace0_generated_80_finish(server, ns);
retVal |= function_namespace0_generated_79_finish(server, ns);
retVal |= function_namespace0_generated_78_finish(server, ns);
retVal |= function_namespace0_generated_77_finish(server, ns);
retVal |= function_namespace0_generated_76_finish(server, ns);
retVal |= function_namespace0_generated_75_finish(server, ns);
retVal |= function_namespace0_generated_74_finish(server, ns);
retVal |= function_namespace0_generated_73_finish(server, ns);
retVal |= function_namespace0_generated_72_finish(server, ns);
retVal |= function_namespace0_generated_71_finish(server, ns);
retVal |= function_namespace0_generated_70_finish(server, ns);
retVal |= function_namespace0_generated_69_finish(server, ns);
retVal |= function_namespace0_generated_68_finish(server, ns);
retVal |= function_namespace0_generated_67_finish(server, ns);
retVal |= function_namespace0_generated_66_finish(server, ns);
retVal |= function_namespace0_generated_65_finish(server, ns);
retVal |= function_namespace0_generated_64_finish(server, ns);
retVal |= function_namespace0_generated_63_finish(server, ns);
retVal |= function_namespace0_generated_62_finish(server, ns);
retVal |= function_namespace0_generated_61_finish(server, ns);
retVal |= function_namespace0_generated_60_finish(server, ns);
retVal |= function_namespace0_generated_59_finish(server, ns);
retVal |= function_namespace0_generated_58_finish(server, ns);
retVal |= function_namespace0_generated_57_finish(server, ns);
retVal |= function_namespace0_generated_56_finish(server, ns);
retVal |= function_namespace0_generated_55_finish(server, ns);
retVal |= function_namespace0_generated_54_finish(server, ns);
retVal |= function_namespace0_generated_53_finish(server, ns);
retVal |= function_namespace0_generated_52_finish(server, ns);
retVal |= function_namespace0_generated_51_finish(server, ns);
retVal |= function_namespace0_generated_50_finish(server, ns);
retVal |= function_namespace0_generated_49_finish(server, ns);
retVal |= function_namespace0_generated_48_finish(server, ns);
retVal |= function_namespace0_generated_47_finish(server, ns);
retVal |= function_namespace0_generated_46_finish(server, ns);
retVal |= function_namespace0_generated_45_finish(server, ns);
retVal |= function_namespace0_generated_44_finish(server, ns);
retVal |= function_namespace0_generated_43_finish(server, ns);
retVal |= function_namespace0_generated_42_finish(server, ns);
retVal |= function_namespace0_generated_41_finish(server, ns);
retVal |= function_namespace0_generated_40_finish(server, ns);
retVal |= function_namespace0_generated_39_finish(server, ns);
retVal |= function_namespace0_generated_38_finish(server, ns);
retVal |= function_namespace0_generated_37_finish(server, ns);
retVal |= function_namespace0_generated_36_finish(server, ns);
retVal |= function_namespace0_generated_35_finish(server, ns);
retVal |= function_namespace0_generated_34_finish(server, ns);
retVal |= function_namespace0_generated_33_finish(server, ns);
retVal |= function_namespace0_generated_32_finish(server, ns);
retVal |= function_namespace0_generated_31_finish(server, ns);
retVal |= function_namespace0_generated_30_finish(server, ns);
retVal |= function_namespace0_generated_29_finish(server, ns);
retVal |= function_namespace0_generated_28_finish(server, ns);
retVal |= function_namespace0_generated_27_finish(server, ns);
retVal |= function_namespace0_generated_26_finish(server, ns);
retVal |= function_namespace0_generated_25_finish(server, ns);
retVal |= function_namespace0_generated_24_finish(server, ns);
retVal |= function_namespace0_generated_23_finish(server, ns);
retVal |= function_namespace0_generated_22_finish(server, ns);
retVal |= function_namespace0_generated_21_finish(server, ns);
retVal |= function_namespace0_generated_20_finish(server, ns);
retVal |= function_namespace0_generated_19_finish(server, ns);
retVal |= function_namespace0_generated_18_finish(server, ns);
retVal |= function_namespace0_generated_17_finish(server, ns);
retVal |= function_namespace0_generated_16_finish(server, ns);
retVal |= function_namespace0_generated_15_finish(server, ns);
retVal |= function_namespace0_generated_14_finish(server, ns);
retVal |= function_namespace0_generated_13_finish(server, ns);
retVal |= function_namespace0_generated_12_finish(server, ns);
retVal |= function_namespace0_generated_11_finish(server, ns);
retVal |= function_namespace0_generated_10_finish(server, ns);
return retVal;
}