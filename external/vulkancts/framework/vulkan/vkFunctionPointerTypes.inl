/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateInstanceFunc)									(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkInstance* pInstance);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyInstanceFunc)									(VkInstance instance, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* EnumeratePhysicalDevicesFunc)							(VkInstance instance, deUint32* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetPhysicalDeviceFeaturesFunc)							(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetPhysicalDeviceFormatPropertiesFunc)					(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties* pFormatProperties);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetPhysicalDeviceImageFormatPropertiesFunc)			(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties* pImageFormatProperties);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetPhysicalDevicePropertiesFunc)						(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties* pProperties);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetPhysicalDeviceQueueFamilyPropertiesFunc)			(VkPhysicalDevice physicalDevice, deUint32* pQueueFamilyPropertyCount, VkQueueFamilyProperties* pQueueFamilyProperties);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetPhysicalDeviceMemoryPropertiesFunc)					(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties* pMemoryProperties);
typedef VKAPI_ATTR PFN_vkVoidFunction	(VKAPI_CALL* GetInstanceProcAddrFunc)								(VkInstance instance, const char* pName);
typedef VKAPI_ATTR PFN_vkVoidFunction	(VKAPI_CALL* GetDeviceProcAddrFunc)									(VkDevice device, const char* pName);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateDeviceFunc)										(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyDeviceFunc)										(VkDevice device, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* EnumerateInstanceExtensionPropertiesFunc)				(const char* pLayerName, deUint32* pPropertyCount, VkExtensionProperties* pProperties);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* EnumerateDeviceExtensionPropertiesFunc)				(VkPhysicalDevice physicalDevice, const char* pLayerName, deUint32* pPropertyCount, VkExtensionProperties* pProperties);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* EnumerateInstanceLayerPropertiesFunc)					(deUint32* pPropertyCount, VkLayerProperties* pProperties);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* EnumerateDeviceLayerPropertiesFunc)					(VkPhysicalDevice physicalDevice, deUint32* pPropertyCount, VkLayerProperties* pProperties);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetDeviceQueueFunc)									(VkDevice device, deUint32 queueFamilyIndex, deUint32 queueIndex, VkQueue* pQueue);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* QueueSubmitFunc)										(VkQueue queue, deUint32 submitCount, const VkSubmitInfo* pSubmits, VkFence fence);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* QueueWaitIdleFunc)										(VkQueue queue);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* DeviceWaitIdleFunc)									(VkDevice device);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* AllocateMemoryFunc)									(VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory);
typedef VKAPI_ATTR void					(VKAPI_CALL* FreeMemoryFunc)										(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* MapMemoryFunc)											(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData);
typedef VKAPI_ATTR void					(VKAPI_CALL* UnmapMemoryFunc)										(VkDevice device, VkDeviceMemory memory);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* FlushMappedMemoryRangesFunc)							(VkDevice device, deUint32 memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* InvalidateMappedMemoryRangesFunc)						(VkDevice device, deUint32 memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetDeviceMemoryCommitmentFunc)							(VkDevice device, VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* BindBufferMemoryFunc)									(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* BindImageMemoryFunc)									(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetBufferMemoryRequirementsFunc)						(VkDevice device, VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetImageMemoryRequirementsFunc)						(VkDevice device, VkImage image, VkMemoryRequirements* pMemoryRequirements);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetImageSparseMemoryRequirementsFunc)					(VkDevice device, VkImage image, deUint32* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements* pSparseMemoryRequirements);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetPhysicalDeviceSparseImageFormatPropertiesFunc)		(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, deUint32* pPropertyCount, VkSparseImageFormatProperties* pProperties);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* QueueBindSparseFunc)									(VkQueue queue, deUint32 bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateFenceFunc)										(VkDevice device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyFenceFunc)										(VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* ResetFencesFunc)										(VkDevice device, deUint32 fenceCount, const VkFence* pFences);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetFenceStatusFunc)									(VkDevice device, VkFence fence);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* WaitForFencesFunc)										(VkDevice device, deUint32 fenceCount, const VkFence* pFences, VkBool32 waitAll, deUint64 timeout);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateSemaphoreFunc)									(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroySemaphoreFunc)									(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateEventFunc)										(VkDevice device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyEventFunc)										(VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetEventStatusFunc)									(VkDevice device, VkEvent event);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* SetEventFunc)											(VkDevice device, VkEvent event);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* ResetEventFunc)										(VkDevice device, VkEvent event);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateQueryPoolFunc)									(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyQueryPoolFunc)									(VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetQueryPoolResultsFunc)								(VkDevice device, VkQueryPool queryPool, deUint32 firstQuery, deUint32 queryCount, deUintptr dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateBufferFunc)										(VkDevice device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyBufferFunc)										(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateBufferViewFunc)									(VkDevice device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBufferView* pView);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyBufferViewFunc)									(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateImageFunc)										(VkDevice device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyImageFunc)										(VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetImageSubresourceLayoutFunc)							(VkDevice device, VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateImageViewFunc)									(VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyImageViewFunc)									(VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateShaderModuleFunc)								(VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkShaderModule* pShaderModule);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyShaderModuleFunc)								(VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreatePipelineCacheFunc)								(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyPipelineCacheFunc)								(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetPipelineCacheDataFunc)								(VkDevice device, VkPipelineCache pipelineCache, deUintptr* pDataSize, void* pData);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* MergePipelineCachesFunc)								(VkDevice device, VkPipelineCache dstCache, deUint32 srcCacheCount, const VkPipelineCache* pSrcCaches);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateGraphicsPipelinesFunc)							(VkDevice device, VkPipelineCache pipelineCache, deUint32 createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateComputePipelinesFunc)							(VkDevice device, VkPipelineCache pipelineCache, deUint32 createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyPipelineFunc)									(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreatePipelineLayoutFunc)								(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyPipelineLayoutFunc)								(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateSamplerFunc)										(VkDevice device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSampler* pSampler);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroySamplerFunc)									(VkDevice device, VkSampler sampler, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateDescriptorSetLayoutFunc)							(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyDescriptorSetLayoutFunc)						(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateDescriptorPoolFunc)								(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyDescriptorPoolFunc)								(VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* ResetDescriptorPoolFunc)								(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* AllocateDescriptorSetsFunc)							(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* FreeDescriptorSetsFunc)								(VkDevice device, VkDescriptorPool descriptorPool, deUint32 descriptorSetCount, const VkDescriptorSet* pDescriptorSets);
typedef VKAPI_ATTR void					(VKAPI_CALL* UpdateDescriptorSetsFunc)								(VkDevice device, deUint32 descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites, deUint32 descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateFramebufferFunc)									(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyFramebufferFunc)								(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateRenderPassFunc)									(VkDevice device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyRenderPassFunc)									(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetRenderAreaGranularityFunc)							(VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateCommandPoolFunc)									(VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyCommandPoolFunc)								(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* ResetCommandPoolFunc)									(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* AllocateCommandBuffersFunc)							(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers);
typedef VKAPI_ATTR void					(VKAPI_CALL* FreeCommandBuffersFunc)								(VkDevice device, VkCommandPool commandPool, deUint32 commandBufferCount, const VkCommandBuffer* pCommandBuffers);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* BeginCommandBufferFunc)								(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* EndCommandBufferFunc)									(VkCommandBuffer commandBuffer);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* ResetCommandBufferFunc)								(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdBindPipelineFunc)									(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdSetViewportFunc)									(VkCommandBuffer commandBuffer, deUint32 firstViewport, deUint32 viewportCount, const VkViewport* pViewports);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdSetScissorFunc)										(VkCommandBuffer commandBuffer, deUint32 firstScissor, deUint32 scissorCount, const VkRect2D* pScissors);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdSetLineWidthFunc)									(VkCommandBuffer commandBuffer, float lineWidth);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdSetDepthBiasFunc)									(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdSetBlendConstantsFunc)								(VkCommandBuffer commandBuffer, const float blendConstants[4]);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdSetDepthBoundsFunc)									(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdSetStencilCompareMaskFunc)							(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, deUint32 compareMask);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdSetStencilWriteMaskFunc)							(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, deUint32 writeMask);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdSetStencilReferenceFunc)							(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, deUint32 reference);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdBindDescriptorSetsFunc)								(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, deUint32 firstSet, deUint32 descriptorSetCount, const VkDescriptorSet* pDescriptorSets, deUint32 dynamicOffsetCount, const deUint32* pDynamicOffsets);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdBindIndexBufferFunc)								(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdBindVertexBuffersFunc)								(VkCommandBuffer commandBuffer, deUint32 firstBinding, deUint32 bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdDrawFunc)											(VkCommandBuffer commandBuffer, deUint32 vertexCount, deUint32 instanceCount, deUint32 firstVertex, deUint32 firstInstance);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdDrawIndexedFunc)									(VkCommandBuffer commandBuffer, deUint32 indexCount, deUint32 instanceCount, deUint32 firstIndex, deInt32 vertexOffset, deUint32 firstInstance);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdDrawIndirectFunc)									(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, deUint32 drawCount, deUint32 stride);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdDrawIndexedIndirectFunc)							(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, deUint32 drawCount, deUint32 stride);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdDispatchFunc)										(VkCommandBuffer commandBuffer, deUint32 groupCountX, deUint32 groupCountY, deUint32 groupCountZ);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdDispatchIndirectFunc)								(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdCopyBufferFunc)										(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, deUint32 regionCount, const VkBufferCopy* pRegions);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdCopyImageFunc)										(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkImageCopy* pRegions);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdBlitImageFunc)										(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkImageBlit* pRegions, VkFilter filter);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdCopyBufferToImageFunc)								(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkBufferImageCopy* pRegions);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdCopyImageToBufferFunc)								(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, deUint32 regionCount, const VkBufferImageCopy* pRegions);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdUpdateBufferFunc)									(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdFillBufferFunc)										(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, deUint32 data);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdClearColorImageFunc)								(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, deUint32 rangeCount, const VkImageSubresourceRange* pRanges);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdClearDepthStencilImageFunc)							(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, deUint32 rangeCount, const VkImageSubresourceRange* pRanges);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdClearAttachmentsFunc)								(VkCommandBuffer commandBuffer, deUint32 attachmentCount, const VkClearAttachment* pAttachments, deUint32 rectCount, const VkClearRect* pRects);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdResolveImageFunc)									(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkImageResolve* pRegions);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdSetEventFunc)										(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdResetEventFunc)										(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdWaitEventsFunc)										(VkCommandBuffer commandBuffer, deUint32 eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, deUint32 memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, deUint32 bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, deUint32 imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdPipelineBarrierFunc)								(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, deUint32 memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, deUint32 bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, deUint32 imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdBeginQueryFunc)										(VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 query, VkQueryControlFlags flags);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdEndQueryFunc)										(VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 query);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdResetQueryPoolFunc)									(VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 firstQuery, deUint32 queryCount);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdWriteTimestampFunc)									(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, deUint32 query);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdCopyQueryPoolResultsFunc)							(VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 firstQuery, deUint32 queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdPushConstantsFunc)									(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, deUint32 offset, deUint32 size, const void* pValues);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdBeginRenderPassFunc)								(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdNextSubpassFunc)									(VkCommandBuffer commandBuffer, VkSubpassContents contents);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdEndRenderPassFunc)									(VkCommandBuffer commandBuffer);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdExecuteCommandsFunc)								(VkCommandBuffer commandBuffer, deUint32 commandBufferCount, const VkCommandBuffer* pCommandBuffers);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroySurfaceKHRFunc)									(VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetPhysicalDeviceSurfaceSupportKHRFunc)				(VkPhysicalDevice physicalDevice, deUint32 queueFamilyIndex, VkSurfaceKHR surface, VkBool32* pSupported);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetPhysicalDeviceSurfaceCapabilitiesKHRFunc)			(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR* pSurfaceCapabilities);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetPhysicalDeviceSurfaceFormatsKHRFunc)				(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, deUint32* pSurfaceFormatCount, VkSurfaceFormatKHR* pSurfaceFormats);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetPhysicalDeviceSurfacePresentModesKHRFunc)			(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, deUint32* pPresentModeCount, VkPresentModeKHR* pPresentModes);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateSwapchainKHRFunc)								(VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroySwapchainKHRFunc)								(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetSwapchainImagesKHRFunc)								(VkDevice device, VkSwapchainKHR swapchain, deUint32* pSwapchainImageCount, VkImage* pSwapchainImages);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* AcquireNextImageKHRFunc)								(VkDevice device, VkSwapchainKHR swapchain, deUint64 timeout, VkSemaphore semaphore, VkFence fence, deUint32* pImageIndex);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* QueuePresentKHRFunc)									(VkQueue queue, const VkPresentInfoKHR* pPresentInfo);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetPhysicalDeviceDisplayPropertiesKHRFunc)				(VkPhysicalDevice physicalDevice, deUint32* pPropertyCount, VkDisplayPropertiesKHR* pProperties);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetPhysicalDeviceDisplayPlanePropertiesKHRFunc)		(VkPhysicalDevice physicalDevice, deUint32* pPropertyCount, VkDisplayPlanePropertiesKHR* pProperties);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetDisplayPlaneSupportedDisplaysKHRFunc)				(VkPhysicalDevice physicalDevice, deUint32 planeIndex, deUint32* pDisplayCount, VkDisplayKHR* pDisplays);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetDisplayModePropertiesKHRFunc)						(VkPhysicalDevice physicalDevice, VkDisplayKHR display, deUint32* pPropertyCount, VkDisplayModePropertiesKHR* pProperties);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateDisplayModeKHRFunc)								(VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetDisplayPlaneCapabilitiesKHRFunc)					(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, deUint32 planeIndex, VkDisplayPlaneCapabilitiesKHR* pCapabilities);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateDisplayPlaneSurfaceKHRFunc)						(VkInstance instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateSharedSwapchainsKHRFunc)							(VkDevice device, deUint32 swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateXlibSurfaceKHRFunc)								(VkInstance instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
typedef VKAPI_ATTR VkBool32				(VKAPI_CALL* GetPhysicalDeviceXlibPresentationSupportKHRFunc)		(VkPhysicalDevice physicalDevice, deUint32 queueFamilyIndex, pt::XlibDisplayPtr dpy, pt::XlibVisualID visualID);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateXcbSurfaceKHRFunc)								(VkInstance instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
typedef VKAPI_ATTR VkBool32				(VKAPI_CALL* GetPhysicalDeviceXcbPresentationSupportKHRFunc)		(VkPhysicalDevice physicalDevice, deUint32 queueFamilyIndex, pt::XcbConnectionPtr connection, pt::XcbVisualid visual_id);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateWaylandSurfaceKHRFunc)							(VkInstance instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
typedef VKAPI_ATTR VkBool32				(VKAPI_CALL* GetPhysicalDeviceWaylandPresentationSupportKHRFunc)	(VkPhysicalDevice physicalDevice, deUint32 queueFamilyIndex, pt::WaylandDisplayPtr display);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateMirSurfaceKHRFunc)								(VkInstance instance, const VkMirSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
typedef VKAPI_ATTR VkBool32				(VKAPI_CALL* GetPhysicalDeviceMirPresentationSupportKHRFunc)		(VkPhysicalDevice physicalDevice, deUint32 queueFamilyIndex, pt::MirConnectionPtr connection);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateAndroidSurfaceKHRFunc)							(VkInstance instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateWin32SurfaceKHRFunc)								(VkInstance instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
typedef VKAPI_ATTR VkBool32				(VKAPI_CALL* GetPhysicalDeviceWin32PresentationSupportKHRFunc)		(VkPhysicalDevice physicalDevice, deUint32 queueFamilyIndex);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetPhysicalDeviceFeatures2KHRFunc)						(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2KHR* pFeatures);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetPhysicalDeviceProperties2KHRFunc)					(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2KHR* pProperties);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetPhysicalDeviceFormatProperties2KHRFunc)				(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2KHR* pFormatProperties);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetPhysicalDeviceImageFormatProperties2KHRFunc)		(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2KHR* pImageFormatInfo, VkImageFormatProperties2KHR* pImageFormatProperties);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetPhysicalDeviceQueueFamilyProperties2KHRFunc)		(VkPhysicalDevice physicalDevice, deUint32* pQueueFamilyPropertyCount, VkQueueFamilyProperties2KHR* pQueueFamilyProperties);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetPhysicalDeviceMemoryProperties2KHRFunc)				(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2KHR* pMemoryProperties);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetPhysicalDeviceSparseImageFormatProperties2KHRFunc)	(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2KHR* pFormatInfo, deUint32* pPropertyCount, VkSparseImageFormatProperties2KHR* pProperties);
typedef VKAPI_ATTR void					(VKAPI_CALL* TrimCommandPoolKHRFunc)								(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlagsKHR flags);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdPushDescriptorSetKHRFunc)							(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, deUint32 set, deUint32 descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateDescriptorUpdateTemplateKHRFunc)					(VkDevice device, const VkDescriptorUpdateTemplateCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplateKHR* pDescriptorUpdateTemplate);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyDescriptorUpdateTemplateKHRFunc)				(VkDevice device, VkDescriptorUpdateTemplateKHR descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR void					(VKAPI_CALL* UpdateDescriptorSetWithTemplateKHRFunc)				(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplateKHR descriptorUpdateTemplate, const void* pData);
typedef VKAPI_ATTR void					(VKAPI_CALL* CmdPushDescriptorSetWithTemplateKHRFunc)				(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplateKHR descriptorUpdateTemplate, VkPipelineLayout layout, deUint32 set, const void* pData);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetSwapchainStatusKHRFunc)								(VkDevice device, VkSwapchainKHR swapchain);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetPhysicalDeviceSurfaceCapabilities2KHRFunc)			(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkSurfaceCapabilities2KHR* pSurfaceCapabilities);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetPhysicalDeviceSurfaceFormats2KHRFunc)				(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, deUint32* pSurfaceFormatCount, VkSurfaceFormat2KHR* pSurfaceFormats);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetImageMemoryRequirements2KHRFunc)					(VkDevice device, const VkImageMemoryRequirementsInfo2KHR* pInfo, VkMemoryRequirements2KHR* pMemoryRequirements);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetBufferMemoryRequirements2KHRFunc)					(VkDevice device, const VkBufferMemoryRequirementsInfo2KHR* pInfo, VkMemoryRequirements2KHR* pMemoryRequirements);
typedef VKAPI_ATTR void					(VKAPI_CALL* GetImageSparseMemoryRequirements2KHRFunc)				(VkDevice device, const VkImageSparseMemoryRequirementsInfo2KHR* pInfo, deUint32* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2KHR* pSparseMemoryRequirements);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* CreateDebugReportCallbackEXTFunc)						(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback);
typedef VKAPI_ATTR void					(VKAPI_CALL* DestroyDebugReportCallbackEXTFunc)						(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator);
typedef VKAPI_ATTR void					(VKAPI_CALL* DebugReportMessageEXTFunc)								(VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, deUint64 object, deUintptr location, deInt32 messageCode, const char* pLayerPrefix, const char* pMessage);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetRefreshCycleDurationGOOGLEFunc)						(VkDevice device, VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties);
typedef VKAPI_ATTR VkResult				(VKAPI_CALL* GetPastPresentationTimingGOOGLEFunc)					(VkDevice device, VkSwapchainKHR swapchain, deUint32* pPresentationTimingCount, VkPastPresentationTimingGOOGLE* pPresentationTimings);
